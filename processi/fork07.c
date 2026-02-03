#include <stdlib.h>  // exit
#include <stdio.h>   // printf

int main(int argc, char **argv) {

  int a=0;
  a=10/a;

  printf("questo codice non verrà eseguito");
  exit(1);
}
