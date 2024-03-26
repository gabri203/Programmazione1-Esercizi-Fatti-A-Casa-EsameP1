#include <stdio.h>
/*Si scriva un programma che prenda due stringhe dalla riga di
comando e dica se la seconda occorre alla fine della prima
(come in ventaglio e aglio).
Il programma dovrà usare una funzione
int strend(char *s, char *t)che prese in
input le stringhe s e t, ritorni 1 se t occorre alla fine di s, 0
altrimenti.*/

int strend(char *s,char *t){
	char *ps=s;
	char *pt=t;
	while(*ps){
		
		ps++;
	}
	while(*pt){
		
		pt++;
		
	}
	--ps;
	--pt;
	
	while(*t){
		if(*pt==*ps){
			pt++;
			ps++;
			
		}else{
			return 0;
			
		}
		
	}
	return 1;
	
	
}


int main(int argc,char *argv[]){
	
	
	if(argc<3){
		printf("Hey bro ,inserisce solo due stringhe nella linea di comando",argv[0]);
		return 1;
	}
	printf("%d\n",strend(argv[1],argv[2]));
	
	
	return 0;
}