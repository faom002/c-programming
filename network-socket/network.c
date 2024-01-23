#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/_endian.h>
#include <sys/socket.h>

short socketCreate(void) {
  short hSocket = 0;
  printf("Create the socket\n");
  hSocket = socket(AF_INET, SOCK_STREAM, 0);
  return hSocket;
}

int bindCreatedSocket(int hSocket) {
  int iRetval = -1;
  int clientPort = 12345;

  struct sockaddr_in remote = {0};

  remote.sin_family = AF_INET;

  // Any incoming interface
  remote.sin_addr.s_addr = htonl(INADDR_ANY);
  remote.sin_port = htons(clientPort); // local port

  iRetval = bind(hSocket, (struct sockaddr *)&remote, sizeof(remote));

  return iRetval;
}

int main(int argc, char *argv[]) {
  int socket_desc = 0, sock = 0, clientLen = 0;
  struct sockaddr_in client;
  char client_message[200] = {0};
  char message[100] = {0};
  const char *pMessage = "hello from faisal server";
  

  // create the client socket
    socket_desc = socketCreate();
    if (socket_desc == -1) {
        printf("could not create socket ");
        return 1;
    }

    printf("socket created\n");

    
    if (bindCreatedSocket(socket_desc) < 0) {
        perror("bind failed");
        return 1;
    }

    printf("bind done\n");

    // 



}
