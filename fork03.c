#include <stdio.h>   // printf
#include <unistd.h>  // getpid, fork

int main()  {

 printf("Codice eseguito padre! (pid: %d)\n", getpid());

  int pid = fork(); // viene creato il processo figlio
  if (pid==0) {
    /* codice figlio */
    printf("Sono il figlio! (pid: %d)\n", getpid());
  } else if (pid>0) {
    /* codice padre */
    printf("Sono il padre! (pid: %d)\n", getpid());
  } else { // pid<0
    printf("Creazione del processo figlio fallita!\n");
  }
  printf("Codice comune a padre e figlio! (pid: %d)\n", getpid());
}
