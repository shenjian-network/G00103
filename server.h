#ifndef SERVER_H
#define SERVER_H

#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/time.h>
#include <time.h>
#include <signal.h>

#include "utils.h"

#define MAXPENDING 1023    /* Max connection requests */
#define MAXCLIENT 1023

#endif // SERVER_H
