import socket

print("=" * 50)
print("{:^50}".format("WELCOME TO THE UDP CLIENT"))
print("=" * 50, "\n")

Name = "localhost"
Port = 1212
CSocket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
print(f"Write: 'close' to leave the server\n")

while True:

    Message = input("You: ")
    if Message.lower() == 'close':
        break
    
    CSocket.sendto(Message.encode(), (Name, Port))
    NewMessage, Address = CSocket.recvfrom(2048)
    print("Server:", NewMessage.decode())

print("Exiting...")
CSocket.close()
