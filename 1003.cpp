#include <cstdlib>
#include <cstdio> 
using namespace std;

int main(){
    int casos, candidatos, regiones, i, I, ganador=0, votos[100][100], suma[5], electo=0;
    scanf("%d", &casos);
                for(casos; casos>0; casos--){
                           for(int g=0; g<5; g++)
                           suma[g]=0;
                               scanf("%d %d", &candidatos, &regiones);
                for(i=0; i<regiones; i++){
                         for(I=0; I<candidatos; I++){
                                  scanf("%d", &votos[i][I]);
                                                     }
                                          }
                                          
                                          
                for(i=0; i<candidatos; i++){
                         for(I=0; I<regiones; I++)
                         suma[i]=suma[i]+votos[I][i];
                                            }
                for(i=0; i<candidatos; i++){
                         if(suma[i]>ganador){
                         ganador=suma[i];                   
                         electo=i+1;
                         }
                         }
                         printf("%d\n", electo);
                         ganador=electo=0;
                               }
return 0;
}

