#include <cstdio>
#include <cstring>
#include <cstdlib>
int main(){
    int tamano, casos, movimiento, mover, i;
    char palabra[100];
    scanf("%d", &casos);
    while(casos--){
                   scanf("%s %d", palabra, &movimiento);
                   tamano=strlen(palabra); 
                   if(movimiento > tamano){
                                 mover=movimiento%tamano;
                                 mover=tamano-mover;
                                 for(mover; mover<tamano; mover++)
                                 printf("%c", palabra[mover]);
                                 for(i=0; i<(tamano-(movimiento%tamano)); i++)
                                 (i+1 ==(tamano-(movimiento%tamano))) ? printf("%c\n", palabra[i]) : printf("%c", palabra[i]);
                                 }
                   else{
                                 mover=tamano-movimiento;
                                 for(mover; mover<tamano; mover++)
                                 printf("%c", palabra[mover]);
                                 for(i=0; i<(mover-movimiento); i++)
                                 (i+1 == (mover-movimiento)) ? printf("%c\n", palabra[i]) : printf("%c", palabra[i]);
                                 
                                 } // else
                        }
                   
                   
    system("PAUSE");
return 0;
}
