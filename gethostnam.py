import socket
import platform

print(platform.node())
socket.gethostbyname('www.google.com')
print(socket.gethostbyaddr(socket.gethostname())[0])
print(socket.gethostname())