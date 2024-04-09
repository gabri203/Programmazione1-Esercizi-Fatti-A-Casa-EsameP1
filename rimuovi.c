#include <stdio.h>
#include <stdlib.h> 

char *rimuovi(char *s,char *t){
	char *ps=s, *pt=t, *z;
	
	while(*s && *t && *s==*t){
		s++;
		t++;
	}
	
	if(*s==*t){
		return NULL;
		
	}
	
	if(*(s+1)==*t){
		s++;
		z=pt;
		
	}else if(*(t+1)==*s){
		
		t++;
		z=ps;
	}
	while(*s && *t && *s==*t){
		s++;
		t++;
		
	}
	if(*s==*t){
		return z;
		
		
	}else {
		return NULL;
	}
}

int main(int argc,char *argv[]){
	
	if(argc<3){
		printf("\nHey bro ricordati di inserire in linea di comando solo due strighe",argv[0]);
		return 0;
	}
	
	printf("%s\n",rimuovi(argv[1],argv[2]));
	return 0;
}
