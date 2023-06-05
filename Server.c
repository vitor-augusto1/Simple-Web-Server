#include "Server.h"
#include <stdio.h>
#include <stdlib.h>

struct Server server_constructor(int domain, int protocol, int service,
    u_long interface, int port, int backlog,
    void (*launch)(struct Server *server))
{
}
