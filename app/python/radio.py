#!/usr/bin/python
#
# the radio interface program
# send a string over udp, wait for return message with timeout
#
# TODO: - fehlende Funktionen implementieren (L,M),
#       - Parameter implementieren
#
import sys      #for exit
import socket   #for sockets
import os

#UDP_HOST = "192.168.178.39"
UDP_HOST = 'ESP-9BCCEF'
UDP_PORT = 15678

serverList = {1:['ClassicEurodance','{pub7.di.fm:80/di_classiceurodance}'],
              2:['Darker Radio','{5.35.255.134:9955/}'],
              3:['Alternative NL','{icecast.omroep.nl:80/3fm-sb-mp3}'],
              4:['Darkwave Radio','{darkwaveradio.com:8000/autodj}'],
              5:['ebm-Radio','{www.ebm-radio.org:7000/}'],
# hostname zu lang:
#              6:['PsyTrancePowerRadio','{streaming201.radionomy.com:80/PsyTrance-Power-radio}'],
#              7:['','{streaming201.radionomy.com:80/Goth-N-Metal}'],
              6:['PsyTrancePowerRadio','{31.12.64.201:80/PsyTrance-Power-radio}'],
              7:['Goth-n-Metal','{31.12.64.201:80/Goth-N-Metal}'],
              8:['auraton - harsh noise','{stream.laut.fm:80/_a_u_r_a_t_o_n_}']}

def SendStation(msg):
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.settimeout(2.0)
    ret=''
    retry=0
    while (retry<3) and (ret==''):
        retry+=1
        try :
            #Set the whole string
            s.sendto(msg, (UDP_HOST, UDP_PORT))   # py 2.7.x
            # receive data from client (data, addr)
            d = s.recvfrom(1024)
            if d:
                reply = d[0]
                addr = d[1]
                #print('Server '+ addr[0] +' replies : ' + reply)
                if (reply.strip('\0')=='OK'):
                    ret='OK'
        except (socket.timeout):
            print '-got timeout:',retry
        except (socket.error, msg):
            print('Error Code : ' + str(msg[0]) + ' Message ' + msg[1])
            sys.exit(2)
    s.close()                       # UDP -> nötig?
    if retry>=3:
        ret='TimeOut'
    return ret


def GetFilesInDir():
    #print os.getcwd()
    files=[]
    for f in os.listdir(os.curdir):
        if os.path.isfile(f) and ('.mp3' in f):
            files.append(f)
    return files

def StreamAudio():
    return 0


''' ----- '''

err=''
print 'Select Station:'
for elem in serverList.keys():
    print elem,':',serverList[elem][0]
print '\nL : create local stream'
print 'M : use other stream address "host.name:port/path"'
print 'Q : quit'
sel = raw_input('Enter Station: ')
if sel in str(serverList.keys()):
    print serverList[int(sel)][1]
    err=SendStation(serverList[int(sel)][1])
elif sel.upper()=='L':
    print 'local stream!'
    err='noch nicht implementiert!'
elif sel.upper()=='M':
    print 'user stream!'
    err='noch nicht implementiert!'
else:
    print 'quit or unknown selection'
    sys.exit(1)

if err=='OK':
    print 'OK: new station set'
else:
    print 'Error:',err

