#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
    
    int tamano, i , cont=1, mitad, MITAD, Mitad, p, I, j;
    char palabra[20];
	
    scanf("%s", palabra);
    tamano = strlen(palabra);
    
    if(tamano%2 == 0)
    printf("error\n");
    
    
    else{
    	printf("%s\n", palabra);
    	if(tamano != 3){
         MITAD = tamano/2;
         mitad = MITAD;
         
         Mitad = mitad;
         do{
         	
         for(i = 0 ; i < MITAD ; i++){
               
               printf("%c", palabra[i]);
              
         }
         for(i = 0 ; i < cont ; i++)
         printf(" ");
         
         mitad = mitad+1;
         i=mitad;
         for(i ; i < tamano ; i++){
               ((i+1) == tamano) ? printf("%c\n", palabra[i]) : printf("%c", palabra[i]);
               }
               cont+=2;
               
               MITAD = MITAD-1;
               
           }while((cont-1) != (Mitad*2));
           
          I=tamano-2;
           do{
           	
           	cont-=2;
           	p=cont-2; 
           	for(i = 0 ; i <= (MITAD+1) ; i++)
           	printf("%c", palabra[i]);
           	
			for(p ; p > 0; p--)
           	printf(" ");
			j=I;
           	for(j; j < tamano ; j++)
           	((j+1) == tamano) ? printf("%c\n", palabra[j]) : printf("%c", palabra[j]);
           	
    
           	MITAD++;
           	I--;
		   }while((cont-4) >= 0);
		   printf("%s\n", palabra);
           
}
else {

printf("%c %c\n", palabra[0], palabra[2]);
printf("%s\n", palabra);
}

}

    return 0;
}
