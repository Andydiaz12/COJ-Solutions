#include <cstdio>

int main(){

int casos, cont1=0, cont2=0;
char jugador1[10], jugador2[10];

scanf("%d", &casos);
while(casos--){
scanf("%s %s", jugador1, jugador2);
if((jugador1[0] == 'r' && jugador2[0] == 's') || (jugador1[0] == 'p' && jugador2[0] == 'r') || (jugador1[0] == 's' && jugador2[0] == 'p')) 
cont1++; 
else if((jugador1[0] == 'r' && jugador2[0] == 'p')|| (jugador1[0] == 'p' && jugador2[0] == 's') || (jugador1[0] == 's' && jugador2[0] == 'r'))  
cont2++; 
}

(cont1 > cont2) ? printf("A win\n") : (cont1 < cont2) ? printf("B win\n") : printf("tied\n");

return 0;
}