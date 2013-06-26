#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

int
main()
{
  struct sockaddr_in server;
  int sock;
  char buf[32];
  int n;

  /* generate socket */
  sock = socket(AF_INET, SOCK_STREAM, 0);

  /* set address/port to sockaddr_in str */
  server.sin_family = AF_INET;
  server.sin_port = htons(12345);
  server.sin_addr.s_addr = inet_addr("127.0.0.1");

  /* connect to server using socket*/
  connect(sock, (struct sockaddr *)&server, sizeof(server));

  /* get data from socket */
  memset(buf, 0, sizeof(buf));
  n = read(sock, buf, sizeof(buf));

  /* output */
  printf("%d, %s\n", n, buf);

  /* close the socket */
  close(sock);

  return 0;
}



