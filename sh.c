#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


void main (void)
{
  setuid (0);
  setgid (0);
  execve ("/bin/sh", 0,0);
}
