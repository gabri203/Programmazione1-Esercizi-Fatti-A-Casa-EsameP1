#include <stdio.h>
#include <stdlib.h>


void substitute(char *s1, char *s2, int m){
	int i,cont_s2=0;
	char *ps1 = s1;
	char *ps2 = s2;
	while(*ps2!='\0'){
		cont_s2++;
		ps2++;
	}
	ps2=s2;
	if(cont_s2>m){
		ps1=s1;
	}
	else if(cont_s2<m){
	for(i=1;i<m;i++){
	ps1++;
	}
	while(*ps2!='\0'){
	*ps1=*ps2;
	ps1++;
	ps2++;
	}	
	}
	
}
int main(int argc,char *argv[]){
	
	if(argc!=4){
		printf("Hey bro,devi fare solo 3 inserimenti nella linea di comando \n",argv[0]);
			return 1;
	}
	
char *stringa1 = argv[1];
char *stringa2 = argv[2];
int  numero = atoi(argv[3]);

substitute(stringa1,stringa2,numero);



printf("%s\n",stringa1);


return 0;
	
}