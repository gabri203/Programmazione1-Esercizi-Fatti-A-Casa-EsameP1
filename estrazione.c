#include <stdio.h>
#include <stdlib.h>

int estrazione(char *s,char *t,char *z){
	int cont_s=0,cont_t=0,cont_tot=0;
	int lunghezza_tot_ps=0,lunghezza_tot_pt=0;
	int L_1,L_2;
	char *ps=s;
	char *pt=t;
	char *pss=s;
	char *ptt=t;
	char *pz=z;
	int  i;
	
	
	while(*ps){
		lunghezza_tot_ps++;
		ps++;
	}
	while(*pt){
		lunghezza_tot_pt++;
		pt++;
	}
	
	ps=s;
	pt=t;
	
	
	while(*ps==*pt){
		cont_s++;
		ps++;
		pt++;
	}
	
	if(cont_s<1){
		return 0;
	}
	
	while(*pss){
		pss++;
		
	}
	--pss;
	while(*ptt){
		ptt++;
	}
	--ptt;
	
	while(*pss==*ptt){
		cont_t++;
		pss--;
		ptt--;
	}
	
	cont_tot=cont_s+cont_t;
	
	L_1=lunghezza_tot_ps-cont_tot;
	L_2=lunghezza_tot_pt-cont_tot;
	
	pz=z;
	
	for(i=0;i<L_1;i++){
		*pz=*ps;
		pz++;
		ps++;
		
	}
	
	for(i=0;i<L_2;i++){
		*pz=*pt;
		pz++;
		pt++;
	}
	
	*pz='\0';
	
	
	if(cont_t>cont_s){
		return 1;
	}else if(cont_t<cont_s){
		return 0;
		
	}
		}
int main(int argc,char *argv[]){
	if(argc < 3){
		return 1;
	}
	char *a=argv[1];
	char *b=argv[2];
	char c[20];
	estrazione(a,b,c);
	int Result=estrazione(a,b,c);
	printf("Il tuo valore di ritorno e' %d\n",Result);
	if(Result==1){	
	printf("L'estrazione e' %s \n",c);
	}else if(Result==0){
		return 0;
	}
	return 0;
}
