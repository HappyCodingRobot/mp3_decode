#!/usr/bin/python
#
# send a string over udp, wait for return message with timeout
import sys      #for exit
import socket   #for sockets

UDP_HOST = "" # IP or ESP hostname
UDP_PORT = 15678

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.settimeout(3.0)

if len(sys.argv) > 1:
    UDP_HOST = sys.argv[1]
print 'sending to host:',UDP_HOST

while 1:
    msg = raw_input('Enter message to send : ')
    #msg = input('Enter message to send : ')    # python 3.x
    if msg.lower() == "q":
        s.close()                               # UDP -> nötig?
        break
    elif msg:
        try :
            #Set the whole string
            s.sendto(msg, (UDP_HOST, UDP_PORT))   # py 2.7.x
            # receive data from client (data, addr)
            d = s.recvfrom(1024)
            if d:
                reply = d[0]
                addr = d[1]
                print('Server '+ addr[0] +' replies : ' + reply)
                # todo: check for 'OK'
        except (socket.timeout):
            print('-got timeout')
        except (socket.error, msg):
            print('Error Code : ' + str(msg[0]) + ' Message ' + msg[1])
            sys.exit()
