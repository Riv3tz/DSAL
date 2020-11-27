import socket                   

s = socket.socket()             
host = "address" 
port = 50000                     

s.connect((host, port))

with open('received_file', 'wb') as f:
    print ('file opened')
    while True:
        data = s.recv(1024)
        print('data=%s', (data))
        if not data:
            break
        f.write(data)

f.close()
s.close()
