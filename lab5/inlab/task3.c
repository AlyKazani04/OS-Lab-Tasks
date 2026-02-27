#include <stdio.h>
#include <unistd.h>

int main() {
  printf("Process ID: %d\n", (int)getpid());
  printf("Parent Process ID: %d\n", (int)getppid());
  printf("User ID: %d\n", (int)getuid());
  return 0;
}
