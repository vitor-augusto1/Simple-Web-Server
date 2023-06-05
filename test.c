#include "Server.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>


void launch(struct Server *server)
{
  char buffer[30000];
  char *hello = "HTTP/1.1 200 OK\nDate: Mon, 05 Jun 2023 06:25:50 \
                 GMT\nServer: Apache/2.2.14 (Win32)\nLast-Modified: Wed, 22 jul \
                 2009 19:15:56 GMT\nContent-length: 88\nContent-Type: text/html \
                 \nConnection: Closed\n\n<html><body><h1>Hello, World!</h1><body></html>";
  int address_length = sizeof(server->address);
  int new_socket;
  while (1) {
  }
}


}
