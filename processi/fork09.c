#include <stdio.h>   // printf
#include <unistd.h>  // getpid, fork
#include <stdlib.h>
#include <sys/wait.h>

int main() {
  int num1=3;
  int num2=5;
  int operazione=1;

  int pid = fork();
  if (pid==0) {
    int ris=0;
    if(operazione==1) {
      printf("(Somma) ");
      ris=num1+num2;
    } else if (operazione==2) {
      printf("(Moltiplicazione) ");
      ris=num1*num2;
    }
    exit(ris);
  } else if (pid>0) {
    //codice padre
    int status;
    wait(&status);
    if (WIFEXITED(status)) {
      int ris = WEXITSTATUS(status);
      printf("%d\n", ris);
      exit(ris);
    }
  }
}
