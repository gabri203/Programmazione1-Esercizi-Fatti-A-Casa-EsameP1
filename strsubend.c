#include <stdio.h>
/*Si scriva la funzione int strsubend (char *s, char *t, char *r) che
prenda in input tre stringhe, s, t e r, e si comporti come segue:
• se (a) la stringa t corrisponde alla parte finale di s (come ad esempio giorno in
buongiorno) e (b) le stringhe t e r hanno la stessa lunghezza, allora la funzione
restituisce 1 e sostituisce la parte finale di s (che corrisponde a t) con la stringa r;
• se una delle due condizioni (a) o (b) non `e verificata, la funzione lascia inalterata la stringa
s e restituisce 0.
Ad esempio supponiamo che s, t e r contengano le stringhe s = buongiorno, t= giorno e r =  anotte
 rispettivamente. In tal caso il seguente codice stamper`a buonanotte:
i f ( s t r subend ( s , t , r ) )
p r i n t f ( ”%s \n” , s ) ;
Si noti che anche nel caso s = buongiorno, t = buongiorno e r = buonanotte, il
codice su indicato stamper`a buonanotte.
Attenzione: il programma dovr`a prendere le tre stringhe dalla linea di comando e pu`o
usare solo la libreria <stdio.h>.*/
int strsubend(char *s,char *t,char *r){

	char *ps=s;
	char *pt=t;
	char *pr=r;
	
	
	while(*ps){//fino al termiinatore
		ps++;
		//non voglio che arrivi al terminatore
	}
	while(*pt){
		
		pt++;
	}
    
	while(*pr){
		
		
	if(*ps==*pt){
		
		ps--;
	    pt--;
	}else {
		++ps;
		*ps=*pr;
		pr++;
	}
}
   
	
}
int main(int argc,char *argv[]){
	
    char *s=argv[1];
    char *t=argv[2];
    char *r=argv[3];

	
	
    strsubend(argv[1],argv[2],argv[3]);
	printf("%s\n",s);
	return 0;
}

