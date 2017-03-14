#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){

    char letras[20];
    int casos, size, i, aceptacion, tamano, copia[20];
    
    scanf("%d", &casos);
    getchar();
    
    while(casos--){
                   
                   aceptacion=1;
                   gets(letras);
                   size = strlen(letras);
                   for(i = 0 ; i < size ; i++){
                        if(letras[i] == 'A' || letras[i] == 'B' || letras[i] == 'C' ||  letras[i] == 'a' || letras[i] == 'b' || letras[i] == 'c')
                        copia[i] = 2;
                        else if(letras[i] == 'D' || letras[i] == 'E' || letras[i] == 'F' ||  letras[i] == 'd' || letras[i] == 'e' || letras[i] == 'f')
                        copia[i] = 3;
                        else if(letras[i] == 'G' || letras[i] == 'H' || letras[i] == 'I' ||  letras[i] == 'g' || letras[i] == 'h' || letras[i] == 'i')
                        copia[i] = 4;
                        else if(letras[i] == 'J' || letras[i] == 'K' || letras[i] == 'L' ||  letras[i] == 'j' || letras[i] == 'k' || letras[i] == 'l')
                        copia[i] = 5;
                        else if(letras[i] == 'M' || letras[i] == 'N' || letras[i] == 'O' ||  letras[i] == 'm' || letras[i] == 'n' || letras[i] == 'o')
                        copia[i] = 6;
                        else if(letras[i] == 'P' || letras[i] == 'Q' || letras[i] == 'R' ||  letras[i] == 'p' || letras[i] == 'q' || letras[i] == 'r' || letras[i] == 'S' || letras[i] == 's')
                        copia[i] = 7;
                        else if(letras[i] == 'T' || letras[i] == 'U' || letras[i] == 'V' ||  letras[i] == 't' || letras[i] == 'u' || letras[i] == 'v')
                        copia[i] = 8;
                        else if(letras[i] == 'W' || letras[i] == 'X' || letras[i] == 'Y' ||  letras[i] == 'Z' || letras[i] == 'w' || letras[i] == 'y' || letras[i] == 'x' || letras[i] == 'z')
                        copia[i] = 9;
                   }
       
                   for(i = 0 ; i < size ; i++){
                   if(copia[i] != copia[size-i-1]){
                   aceptacion = 0;
                   i = size;
                   }
                   }
                   (aceptacion == 0) ? printf("NO\n") : printf("YES\n");
                

}

    return 0;
}
