import socket             
port = 5050 
s = socket.socket()         
host = "name"   
s.bind((host, port))       
s.listen(5)                     

while True:
    conn, addr = s.accept()     
    print ('Got connection from', addr)
    data = conn.recv(1024)
    print('Server received', repr(data))

    filename='TCPSERVER.py'
    f = open(filename,'rb')
    l = f.read(1024)
    while (l):
       conn.send(l)
       print('Sent ',repr(l))
       l = f.read(1024)
    f.close()
