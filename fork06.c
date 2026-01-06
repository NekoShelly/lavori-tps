#include <stdio.h>   // printf
#include <unistd.h>  // getpid, fork

int main() {
  char m;
  int led=0;
  printf("Cosa vuoi fare? (v= lampeggi del led verde, r= lampeggi del led rosso, g= lampeggi del led giallo, q= chiusura del programma) \n");
  while (1){
  do {
    scanf (" %c",&m);
    } while (m!='v' && m!='r' && m!='g' && m!='q'); //chiusura primo do while

    if (m=='v'){
       led=1;
    }
    if (m=='r'){
       led=2;
    }
    if (m=='g'){
       led=3;
    }
    if (m=='q'){
       led=0;
    }

    int pid = fork();
    if (pid==0) {
        /* codice figlio */
        switch (led){
        case 1:
	for(int i=0; i<10; i++) {
		printf("%d Led verde acceso \n", i+1);
		sleep(0.3);
		printf("%d Led verde spento \n", i+1);
		sleep(0.3);
		printf("\n");
	}
        break;
        case 2:
        for(int i=0; i<10; i++) {
                printf("%d Led rosso acceso \n", i+1);
                sleep(0.7);
		printf("%d Led rosso spento \n", i+1);
                sleep(0.7);
		printf("\n");
        }
	break;
        case 3:
        for(int i=0; i<10; i++) {
                printf("%d Led giallo acceso \n", i+1);
                sleep(1.2);
		printf("%d Led giallo spento \n", i+1);
                sleep(1.2);
		printf("\n");
        }
	break;
        default:
        break;
        } //chiusura switch

    } //chiusura if
    } //chiusura while

} //chiusura main
