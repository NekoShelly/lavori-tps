#include <stdio.h>   // printf
#include <unistd.h>  // getpid, fork
int main() {
printf("Calcolo del perimetro e dell'area del rettangolo.\n");
  int pid = fork();
  int h=4;
  int r=0;
  int b=2;
  if (pid==0) {
r=(b+h)*2;
printf("Perimetro: %d\n", r);
  } else if (pid>0) {
r=b*h;
printf("Area: %d\n", r);
  } else { // pid<0
    printf("Errore");
  }
}
