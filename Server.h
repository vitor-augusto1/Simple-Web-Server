#ifndef Server_h
#define Server_h

#include <sys/socket.h>
#include <netinet/in.h>

struct Server {
  int domain;
  int protocol;
  int service;
  u_long interface;
  int port;
  int backlog;
  struct sockaddr_in address;
  int socket;
  void (*launch)(struct Server *server);
};


#endif /* Server_h */
