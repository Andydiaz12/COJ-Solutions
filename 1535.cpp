#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(){
    int casos, i, pesos[10], I, aceptacion[20], copy[10], x;
    
    scanf("%d", &casos);
     memset(aceptacion, 0, sizeof(aceptacion));
    for(I = 0 ; I<casos ; I++){
                  
                   for(i = 0 ; i < 10 ; i++){
                         scanf("%d", &pesos[i]);
                         copy[i] = pesos[i];
                         }
                         sort(copy, copy + 10);
                     
                     
                         
                   for(i = 0 ; i < 10 ; i++){
                         if(pesos[i] == copy[i])
                         aceptacion[I] = 1;
						 else{
							aceptacion[I] = 0;
							i=10;
						 }
                         }
				   if(aceptacion[I] != 1){
				   for(i = 0 ; i < 10 ; i++){
						if(pesos[10-i-1] == copy[i])
							aceptacion[I] = 1;
						else{
							aceptacion[I] = 0;
							i=10;
						}
				   }
				   }
                   
                         
                         
                   }
	printf("Lumberjacks:\n");
                   for(i = 0 ; i < casos ; i++){
                         (aceptacion[i] == 0) ? printf("Unordered\n") : printf("Ordered\n");
                         }
                         
                         
                   return 0; 
}
                         
                      