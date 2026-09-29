import socket

print("=" * 50)
print("{:^50}".format("WELCOME TO THE TCP CLIENT"))
print("=" * 50, "\n")

Name = "localhost"
Port = 1212
CSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
CSocket.connect((Name, Port))

print("Write: 'close' to leave the server\n")

while True:

    Message = input("You: ")
    if Message.lower() == 'close':
        break
    
    if not Message.strip():
        print("Message can't be empty\n")
        continue
    
    CSocket.send(Message.encode())
    NewMessage = CSocket.recv(1024)
    print("Server:", NewMessage.decode())

print("Exiting...")
CSocket.close()
