#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int
main()
{
  int sock0;
  struct sockaddr_in addr;
  struct sockaddr_in client;
  int len;
  int sock;

  /* generate socket */
  sock0 = socket(AF_INET, SOCK_STREAM, 0); /* what are these constants? */

  /* set address/port to sockaddr_in str */
  addr.sin_family = AF_INET;
  addr.sin_port = htons(12345);
  addr.sin_addr.s_addr = INADDR_ANY;

  /* assign info to socket */
  bind(sock0, (struct sockaddr *)&addr, sizeof(addr));

  /* listen socket and accept connection */
  listen(sock0, 5);

  /* get new socket from client address info */
  len = sizeof(client);
  sock = accept(sock0, (struct sockaddr *)&client, &len);

  /* write string into socket */
  write(sock, "HELLO", 5);

  /* close the socket */
  close(sock);
  close(sock0);

  return 0;
}



