#include <stdio.h>

char *asporto(char *s,char *t,char *z){
	
	char *ps=s;
	char *ps1=t;
	
	while(*s&&*t){
		
		if(*s==*t){
			
			s++;
			t++;
			
		}else{ *z=*s;
			
			z++;
			s++;
			t++;
		}
		
	}
	while(*ps||*ps1){
		
		if(*ps==*ps1){
			
			ps++;
			ps1++;
		}else {*z=*ps1;
			z++;
			ps1++;
			ps++;
		}
	}
  *z='\0';
}
int main(int argc,char *argv[]){
	
	if(argc<3){
	
		return 1;
		
	}
	
char *a=argv[1];
char *b=argv[2];
char c[20];
	
asporto(a,b,c);
	
printf("%s\n",c);
	
  return 0;
	
}