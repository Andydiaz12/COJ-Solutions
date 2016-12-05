#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int a, letras=0;
	char hora[10];
	scanf("%s", hora);
	a=strlen(hora);

	if(hora[8] == 'P'){
		letras=(hora[0]-'0')*10;
		letras+=hora[1]-'0';
		if(letras == 1)
		letras=13;
		else if(letras == 2)
		letras=14;
		else if(letras == 3)
		letras=15;
		else if(letras == 4)
		letras=16;
		else if(letras == 5)
		letras=17;
		else if(letras == 6)
		letras=18;
		else if(letras == 7)
		letras=19;
		else if(letras == 8)
		letras=20;
		else if(letras == 9)
		letras=21;
		else if(letras == 10)
		letras=22;
		else if(letras == 11)
		letras=23;
		else if(letras == 12)
		letras=12;
	
		printf("%d:%c%c:%c%c\n", letras, hora[3], hora[4], hora[6], hora[7]);
}
	else if(hora[8] == 'A'){
		letras=(hora[0]-'0')*10;
		letras+=hora[1]-'0';
		if(letras == 12)
		printf("00:%c%c:%c%c\n",hora[3], hora[4], hora[6], hora[7]);
		else if(letras != 12){
		printf("%c%c:%c%c:%c%c\n", hora[0], hora[1], hora[3], hora[4], hora[6], hora[7]);
		}
	}
	
		


	return 0;
}

