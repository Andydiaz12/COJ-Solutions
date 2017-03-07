#include <cstring>
#include <cstdio>
#define MAX 999999

using namespace std;

int main(){
	
	char valor[MAX];
	int tamano, i, suma=0;
	
	gets(valor);
	tamano=strlen(valor);
	
	for(i = 0 ; i < tamano ; i++){
		if(valor[i] == 'b')
		suma+=2;
		else if(valor[i] == 'c')
		suma+=3;
		else if(valor[i] == 'd')
		suma+=4;
		else if(valor[i] == 'f')
		suma+=6;
		else if(valor[i] == 'g')
		suma+=7;
		else if(valor[i] == 'h')
		suma+=8;
		else if(valor[i] == 'j')
		suma+=10;
		else if(valor[i] == 'k')
		suma+=11;
		else if(valor[i] == 'l')
		suma+=12;
		else if(valor[i] == 'm')
		suma+=13;
		else if(valor[i] == 'n')
		suma+=14;
		else if(valor[i] == 'p')
		suma+=16;
		else if(valor[i] == 'q')
		suma+=17;
		else if(valor[i] == 'r')
		suma+=18;
		else if(valor[i] == 's')
		suma+=19;
		else if(valor[i] == 't')
		suma+=20;
		else if(valor[i] == 'v')
		suma+=22;
		else if(valor[i] == 'w')
		suma+=23;
		else if(valor[i] == 'x')
		suma+=24;
		else if(valor[i] == 'y')
		suma+=25;
		else if(valor[i] == 'z')
		suma+=26;
		
	}
	printf("%d\n", suma);


	return 0;
}
