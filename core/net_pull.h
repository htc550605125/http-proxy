#ifndef _PROXY_NET_PULL_H_
#define _PROXY_NET_PULL_H_

#include <sys/epoll.h>

typedef int (*net_pull_handler_t)(struct epoll_event ev, void* data);

int net_poll_init();

int net_poll_work();

int net_pull_add(int fd, net_pull_handler_t h_err, void* d_err);

int net_pull_set_handler(int fd, int flag, net_pull_handler_t handler, void* data);

int net_pull_del(int fd);

int net_pull_done();

#endif
