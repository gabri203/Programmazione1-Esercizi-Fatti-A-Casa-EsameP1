#include <stdio.h>
//esercizio fatto in casa , elinversione
//s=concluda    t=concava    z=adulava
int elinversione(char *s,char *t,char *z){
    
	char *ps=s;
	
	while(*s==*t && *s){
		s++;
		t++;
		
	}
	// "*s" si trova alla posizione s[4] e anche t[4]
	 ps=s;
	for(;*s;s++)
		;
		
		
	 // *s arrivera ad s[7]='\0' cioè arriverebbe al terminatore dei caretteri
	for(s=s-1;s>=ps;s--,z++){// con s=s-1 dico che deve decrementare la posizione di s che passa da s[7] a s[6]="a"
		if(*s!=*z){
			return 0;
		}
	}
		// z si trova nella posizone z[3]
		for(;*t;t++,z++){//con l'incremento di z++ arriva alla posizione z[4]
			
			if(*t!=*z){
				
				return 0;
			}
			
		}
		
		if(*z =='\0'){
			return 1;
			
		}else 
			return 0;
		
		
	}
	

int main(int argc,char *argv[]){
if(argc<4){
	return 1;
}
printf("return %d\n",elinversione(argv[1],argv[2],argv[3]));

return 0;
}