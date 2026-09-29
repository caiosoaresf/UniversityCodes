import socket

print("=" * 50)
print("{:^50}".format("WELCOME TO THE TCP SERVER"))
print("=" * 50, "\n")

Port = 1212
SSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
SSocket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
SSocket.bind(("", Port))
SSocket.listen(1)

print("Server ready")
print(f"Press ctrl + c to close the server\n")

Connection, Address = SSocket.accept()

while True:
    
    Message = Connection.recv(1024).decode()
    if not Message:
        break
    
    NewMessage = Message.upper().strip()
    print(f"{Address}: {Message}")
    Connection.send(NewMessage.encode())

print("Connection terminated by user")
