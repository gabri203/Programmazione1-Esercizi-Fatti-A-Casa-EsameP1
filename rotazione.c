#include <stdio.h>
/*Una stringa z si dice ottenuta da una stringa s tramite una r-rotazione quando:
• La stringa z `e formata ruotando i caratteri di s di r posizioni verso destra.
Ad esempio, se s = "ciao", allora z = "aoci" `e una 2-rotazione di s.
Si scriva la funzione int rotation(const char *s, const char *z, int r)
che prese in input due stringhe s e z, e un intero r, restituisca 1 se z `e una r-rotazione di s;
0 in caso contrario.
Ad esempio, il seguente codice dovr`a restituire 1:
i n t result = rotation("ciao", "aoci", 2);
printf("%d\n", result);*/

int rotazione( char  *s, char *z,int r){
    
	char *ps=s;
	char *pz=z;


	while(*pz!='\0'&&r--){// r sarà 2-- poi 1-- e infine 0-- ma non entrera nel while poichè falso
		pz++;//rimarrà alla posizione pz[2]="ci"
	}
	while(*ps!='\0'){//si ferma appena aarriva al terminatore
		if(*ps==*pz){//mi confronta ps[0]="ci" con pz[2]="ci"
	        ps++;
			pz++;
			if(*pz=='\0'){//quando pz[] arriva alla fine del terminatore 
				pz=z;//assegnamo la prima posizione di do z a pz,cosi dopo può fare un controllo di pz[0]="ao" con ps[2]="ao" e dopo uscivo dal ciclo poichè while(*ps) era arrivato alla fine del terminatore
			}
	}else return 0;
	}		
	return 1;
	}
int main(int argc,char *argv[]){
	if(argc<3){
		return 1;
	}
    char *s=argv[1];
    char *z=argv[2];
    int r;
    sscanf(argv[3], "%d", &r);

	
int result=rotazione(s,z,r);	

	printf("Il risultato è %d\n",result);
	return 0;
}