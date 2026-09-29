import socket

print("=" * 50)
print("{:^50}".format("WELCOME TO THE UDP SERVER"))
print("=" * 50, "\n")

Port = 1212
SSocket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
SSocket.bind(("", Port))

print("Server ready")
print(f"Press ctrl + c to close the server\n")

while True:
    
    Message, Address = SSocket.recvfrom(2048)
    NewMessage = Message.decode().upper().strip()
    
    print(f"{Address}: {Message.decode()}")
    SSocket.sendto(NewMessage.encode(), Address)
