/**
 * 64BIT 64BIT 64BIT 64BIT 64BIT 64BIT 64BIT 64BIT
 * This program demonstrates invocation of the chmod
 * system call (90) using the syscall function.
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>  

int main(int argc, char *argv[]) {

  // I use command-line arguments for the command.
  
  int result = syscall(90, argv[2], argv[1]);

  // A result of -1 means that something did not go as planned.
  // I included <errno.h> to give detailed errors for the syscall.

  if (result == -1) {
    printf("chmod: `%s`: %s\n", argv[1], strerror(errno));
  }
}

