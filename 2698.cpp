#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main(){
	int a, cont=0, i;
	char letras[1000];

scanf("%s", letras);
a=strlen(letras);
	
				for(i=0; i<a; i++){
					if(letras[i] == 'A')
					cont+=1;
					else if(letras[i] == 'B')
					
					cont+=2;
					else if(letras[i] == 'C')
					cont+=3;
					else if(letras[i] == 'D')
					cont+=4;
					else if(letras[i] == 'E')
					cont+=5;
					else if(letras[i] == 'F')
					cont+=6;
					else if(letras[i] == 'G')
					cont+=7;
					else if(letras[i] == 'H')
					cont+=8;
					else if(letras[i] == 'I')
					cont+=9;
					else if(letras[i] == 'J')
					cont+=10;
					else if(letras[i] == 'K')
					cont+=11;
					else if(letras[i] == 'L')
					cont+=12;
					else if(letras[i] == 'M')
					cont+=13;
					else if(letras[i] == 'N')
					cont+=14;
					else if(letras[i] == 'O')
					cont+=15;
					else if(letras[i] == 'P')
					cont+=16;
					else if(letras[i] == 'Q')
					cont+=17;
					else if(letras[i] == 'R')
					cont+=18;
					else if(letras[i] == 'S')
					cont+=19;
					else if(letras[i] == 'T')
					cont+=20;
					else if(letras[i] == 'U')
					cont+=21;
					else if(letras[i] == 'V')
					cont+=22;
					else if(letras[i] == 'W')
					cont+=23;
					else if(letras[i] == 'X')
					cont+=24;
					else if(letras[i] == 'Y')
					cont+=25;
					else if(letras[i] == 'Z') 
					cont+=26;
				}
				printf("%d\n", cont);
	
	return 0;
}
