#include <stdio.h>
/*Esercizio 1 Una stringa z si dice ottenuta per fusione di due stringhe s e t quando
(a) tutte le lettere di s sono contenute (nel loro ordine) in t;
(b) le rimanenti lettere di t formano z.
Ad esempio z="asine" `e una fusione di s = "censo" e t = "ascensione", mentre
z = "matassa" `e una fusione di s = "tiro" e t = "matitarossa".
Si scriva la funzione void fusione (char *s, char *t, char *z) che prenda in
input tre stringhe s, t e z, e memorizzi nella stringa z la fusione di s e t se la condizione (a)
`e verificata, altrimenti la stringa vuota.
Ad esempio, il seguente codice stamper`a asine.
fusione("censo", "ascensione", z);
printf("%s\n", z);
Attenzione: il programma dovrà prendere le due stringhe s e t dalla linea di comando e
può usare solo la libreria <stdio.h>.*/

void fusione(char *s,char *t,char *z){

	while(*t!='\0'||*s!='\0'){
		
		if(*s==*t){
			s++;
			t++;
			
			
		}else 
			if(*s!=*t) {
			*z=*t;
			z++;
			t++;
		}
	}
		
		*z='\0';
		
}


int main(int argc,char *argv[]){
	if(argc < 3){
		return 1;
	}
	char *s=argv[1];
	char *t=argv[2];
	char z[20];
	
	fusione(s,t,z);
	
	printf("La fusione e' = %s\n",z);
	
	return 0;
}
