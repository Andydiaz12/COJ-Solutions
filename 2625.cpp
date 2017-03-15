#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cstring>

using namespace std;

void impresion(int COLUMNAS, char(*a)[100]){
     int i;
     for(i = 0 ; i < COLUMNAS ; i++){
                ((i+1) == COLUMNAS) ? printf("%c\n", (*a)[i]) : printf("%c", (*a)[i]);
                }
     }

int main(){
    
    int casos, columnas, i, j;
    char valores[100];
    memset(valores, 'O', sizeof(valores));

    scanf("%d %d", &casos, &columnas);
    
    
    for(i = 1 ; i < columnas ; i++){
          if(valores[i-1] == 'O')
          valores[i] = 'I';
          else if(valores[i-1] == 'I')
          valores[i] = 'E';
          else if(valores[i-1] == 'E')
          valores[i] = 'O';
          }
          
          impresion(columnas, &valores);
          
    for(j = 0 ; j < (casos-1) ; j++){
    for(i = 0 ; i < columnas ; i++){
          if(valores[i] == 'O')
          valores[i] = 'I';
          else if(valores[i] == 'I')
          valores[i] = 'E';
          else if(valores[i] == 'E')
          valores[i] = 'O';
          }
          impresion(columnas, &valores);
          
          }

return 0;
}
