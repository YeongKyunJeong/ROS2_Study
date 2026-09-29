import socket
s = socket.socket()
s.connect(('localhost', 9090))

print(s.recv(1024).decode())
while True:

    message = input("보낼 메세지를 입력하세요. : ")

    s.sendall(message.encode())

    if message.lower() == 'bye':
        print("연결을 종료합니다.")
        break

    data = s.recv(1024)
    if not data:
        print("서버 연결이 끊어졌습니다.")
        break;   

    reply = data.decode()
    print("서버 :", reply)

    if reply.lower() == "bye":
        print("서버가 대화를 종료했습니다.")
        break

s.close()