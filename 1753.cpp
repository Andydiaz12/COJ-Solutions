#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int casos, letras, i, l, z;
	char palabra[20], arr[20], copia[20];
	scanf("%d", &casos);
	while(casos--){
		z=0;
		scanf("%s", palabra);
		letras=strlen(palabra);
		l=letras;
		for(i=0; i<letras; i++){
			if(palabra[i] == 'A' || palabra[i] == 'B' || palabra[i] == 'C' || palabra[i] == 'a' || palabra[i] == 'b' || palabra[i] == 'c')
			arr[i]='2';
			
			else if(palabra[i] == 'D' || palabra[i] == 'E' || palabra[i] == 'F' || palabra[i] == 'd' || palabra[i] == 'e' || palabra[i] == 'f')
			arr[i]='3';
			
			else if(palabra[i] == 'I' || palabra[i] == 'H' || palabra[i] == 'G' || palabra[i] == 'i' || palabra[i] == 'h' || palabra[i] == 'g')
			arr[i]='4';
			
			else if(palabra[i] == 'J' || palabra[i] == 'K' || palabra[i] == 'L' || palabra[i] == 'j' || palabra[i] == 'k' || palabra[i] == 'l')
			arr[i]='5';
			
			else if(palabra[i] == 'O' || palabra[i] == 'N' || palabra[i] == 'M' || palabra[i] == 'o' || palabra[i] == 'n' || palabra[i] == 'm')
			arr[i]='6';
			
			else if(palabra[i] == 'P' || palabra[i] == 'Q' || palabra[i] == 'R' || palabra[i] == 'S' || palabra[i] == 'p' || palabra[i] == 'q' || palabra[i] == 'r' || palabra[i] == 's')
			arr[i]='7';
			
			else if(palabra[i] == 'T' || palabra[i] == 'U' || palabra[i] == 'V' || palabra[i] == 'v' || palabra[i] == 'u' || palabra[i] == 't')
			arr[i]='8';
			
			else if(palabra[i] == 'W' || palabra[i] == 'X' || palabra[i] == 'Y' || palabra[i] == 'Z' || palabra[i] == 'w' || palabra[i] == 'x' || palabra[i] == 'y' || palabra[i] == 'z')
			arr[i]='9';
		
			copia[l-1]=arr[i];
			l--;
		}
		for(i=0 ; i<letras; i++){
			if(arr[i] != copia[i]){
			z=1;
			i=letras;
		}

		
		}
		(z == 1)?printf("N0\n"):printf("YES\n");
	}
	
	return 0;
}
