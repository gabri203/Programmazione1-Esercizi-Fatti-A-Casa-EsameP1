#include <stdio.h>
/*Una parola y si dice bizeppa di un'altra parola x se y si può ottenere da x inserendo
in x due volte la stessa lettera. Ad esempio
cannone non è una bizeppa di cane,
cannone è una bizeppa di canoe,
bocca è una bizeppa di boa,
arbitro è una bizeppa di abito.
Si scriva una funzione int bizeppa(char *s, char *t) che prese in input due strin-
ghe non vuote, s e t, restituisca 1 se t è una bizeppa di s, 0 altrimenti.
La funzione va inserita in un programma che prenda le due stringhe dalla linea di comando.
Attenzione: il programma puè usare solo la libreria <stdio.h>.*/
int bizeppa(char *s,char *t){
	
	char *ps=s;
	char *pt=t;
	
	while(*ps&&*pt&&*ps==*pt){
		ps++;
		pt++;
		
	}
		if(*ps=='\0'||*pt=='\0'){
			return 0;
		}
	char ch=*pt;
	pt++;
	for(;*ps==*pt;ps++,pt++){
		
		if(*ps=='\0'){
			
			return 0;
		}
	}
	if(ch!=*pt){
		return 0;
	}
	pt++;
	for(;*ps==*pt;ps++,pt++){
		
		if(*ps=='\0'){
			
			return 1;
		}
	}
	return 0;
}




int main(int argc,char *argv[]){
	
	
	printf("%d\n",bizeppa(argv[1],argv[2]));
	return 0;
}