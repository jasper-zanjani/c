/* The Perform, Assign, Test idiom is common in C and often combined into a single statement */
  
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
  int fd = open("foo", O_WRONLY | O_CREAT, 0644);
  if (fd < 0) {
    printf("error number %d\n", errno);
    perror("foo");
    exit(1);
  }
}