// Linux Systems Programming course by Chris Brown - System Calls and Errors unit

#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // close, write functions

void main()
{
  int fd;
  fd = open("foo", O_WRONLY | O_CREAT, 0644);
  write(fd, "hello world", 11);
  close(fd);
}