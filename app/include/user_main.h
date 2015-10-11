#ifndef __USER_MAIN_H__
#define __USER_MAIN_H__


/** external functions */

//We need this to tell the OS we're running at a higher clock frequency.
extern void os_update_cpu_frequency(int mhz);


/** udp functions added */

// Callback routine for incomping UDP packets
static void ICACHE_FLASH_ATTR udp_recv_cb(void *arg, struct udp_pcb *pcb, struct pbuf *p, struct ip_addr *addr, u16_t port);

// UDP send routine
//int ICACHE_FLASH_ATTR udpio_send(const char *buf, int port);

// Initialize UDP io by creating the Queue and registering the receive callback
void ICACHE_FLASH_ATTR udpio_init(void);


/** decoder and main functions */

#if defined(PWM_HACK)
static int sampToI2sPwm(short s);
#elif defined(DELTA_SIGMA_HACK)
int sampToI2sDeltaSigma(short s);
#else
static int sampToI2s(short s);
#endif

//Calculate the number of samples that we add or delete. Added samples means a slightly lower
//playback rate, deleted samples means we increase playout speed a bit. This returns an
//8.24 fixed-point number
int ICACHE_FLASH_ATTR recalcAddDelSamp(int oldVal);

//This routine is called by the NXP modifications of libmad. It passes us (for the mono synth)
//32 16-bit samples.
void render_sample_block(short *short_sample_buff, int no_samples);

//Called by the NXP modificationss of libmad. Sets the needed output sample rate.
void ICACHE_FLASH_ATTR set_dac_sample_rate(int rate);

static enum  mad_flow ICACHE_FLASH_ATTR input(struct mad_stream *stream);

//Routine to print out an error
static enum mad_flow ICACHE_FLASH_ATTR error(void *data, struct mad_stream *stream, struct mad_frame *frame);

//This is the main mp3 decoding task. It will grab data from the input buffer FIFO in the SPI ram and
//output it to the I2S port.
void ICACHE_FLASH_ATTR tskmad(void *pvParameters);

int ICACHE_FLASH_ATTR getIpForHost(const char *host, struct sockaddr_in *ip);

//Open a connection to a webserver and request an URL. Yes, this possibly is one of the worst ways to do this,
//but RAM is at a premium here, and this works for most of the cases.
int ICACHE_FLASH_ATTR openConn(const char *streamHost, const char *streamPath);

//Reader task. This will try to read data from a TCP socket into the SPI fifo buffer.
void ICACHE_FLASH_ATTR tskreader(void *pvParameters);

//Simple task to connect to an access point, initialize i2s and fire up the reader task.
void ICACHE_FLASH_ATTR tskconnect(void *pvParameters);

void ICACHE_FLASH_ATTR user_init(void);



#endif // __USER_MAIN_H__
