import socket
s = socket.socket()
s.bind(('localhost', 9090)) 
s.listen(1)
print("기다리는 중...")
conn, addr = s.accept()
print("연결 됨 : ", addr)
conn.sendall("서버에 연결되었습니다. : 9090".encode())

while True:

    data = conn.recv(1024)

    if not data:
        print("클라이언트가 대화를 종료했습니다.")
        break

    message = data.decode()
    print("클라이언트 :", message)

    if message.lower() == "bye":
        print("클라이언트가 대화를 종료했습니다.")
        break

    reply = input("보낼 메세지를 입력하세요. : ")
    
    conn.sendall(reply.encode())

    if reply.lower() == 'bye':
        print("연결을 종료합니다.")
        break

conn.close()
s.close()