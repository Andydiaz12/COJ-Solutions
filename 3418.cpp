#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    char cadena[50];
    int a=0, e=0, I=0, o=0,u=0, tamano, i;
    
    while(scanf("%s", cadena) != EOF){
                       tamano = strlen(cadena);
                       for(i = 0 ; i < tamano ; i++){
                             if(cadena[i] == 'A' || cadena[i] == 'a') 
                             a++;
                             else if(cadena[i] == 'E' || cadena[i] == 'e')
                             e++;
                             else if(cadena[i] == 'I' || cadena[i] == 'i')
                             I++;
                             else if(cadena[i] == 'O' || cadena[i] == 'o')
                             o++;
                             else if(cadena[i] == 'U' || cadena[i] == 'u')
                             u++;
                             }
                             
                       }
                       
                       printf("%d %d %d %d %d\n", a, e, I, o, u);
    return 0;
}
