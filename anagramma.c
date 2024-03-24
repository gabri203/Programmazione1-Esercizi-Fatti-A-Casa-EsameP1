#include <stdio.h>
/*Si scriva un programma che prenda due stringhe (due parole
di lettere alfabetiche minuscole, senza spazi) dalla linea di
comando e dica se esse sono l’una l’anagramma dell’altra.
Il programma dovrà usare una funzione int anagramma
(char *s, char *t)che, prese in input due stringhe,
restituisca 1 se esse sono l’una l’anagramma dell’altra, 0
altrimenti.*/
//Nome:Said Gabriel
//Cognome:Brito Ferlisi
//Classe:A-C
int anagramma(char *s,char *t){
		char *ps=s;
		char *pt=t;
		int cont=0;
		int cont1=0;
		int cont2=0;
		
		while(*ps!='\0'){
			ps++;
			cont1++;
			
		}
		while(*pt!='\0'){
			pt++;
			cont2++;
			
		}
		
		
		if(cont1!=cont2){//controllo che mi permette verificare se le stringhe inserite dall'utente  sono diverse 
			
			return 0;
			
		}
		
		ps=s;//inizzilizzo ps alla prima posizione
		pt=t;//inizializzo pt alla prima posizione
		
		while(*ps&&*pt){//while che viene eseguito finchè *ps arriva la terminatore
			if(*ps==*pt){//se sono uguali scorre  ps e pt
				ps++;
				pt++;
			}else{//altrimenti scorre pt++ 
				pt++;
			}
		
			if(*ps=='\0'){//se nel caso ps arriva alla fine dell terminatore vuol dire che ho trovato tutte le stringhe in ps
				break;//si rompe tutto ,sia l'if che il ciclo
			}
			
			 if(*pt=='\0'){//questo if serve per verificare tot volte ps quindi cosi facendo pt viene assegnato sempre alla prima posizione poichè deve controllare ps che arrivi alla fine
				pt=t;
				cont++;//contatore 
				
			}
			 if(cont>=100){//serve per contare il numero di volte in cui pt=='\0' per dare un limite alle volte in cui pt  arriva al terminatore  cosi non può superare questo limite
				return 0;
			}
			
		}
		
		

			if(*ps=='\0'||*pt=='\0'){//se ps è arrivato alla fine vuol dire che ha trovato tutto in pt quindi è tutto OK
				return 1;
				
				
			}
		
	
		
}
int main(int argc,char *argv[]){


	if(argc<3){
		 printf("Utilizzo: %s <string1> <string2> <anagramma>\n", argv[0]);
        return 1;
	}
	
	
	printf("%d\n",anagramma(argv[1],argv[2]));
	
	return 0;
}