#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){

    int casos, tamano, cont, i;
    char original[100], segundo[100]; 

    scanf("%d", &casos);
    
    while(casos--){
                   cont=0;
                   scanf("%s %s", original, segundo);
                   
                   tamano = strlen(original);
                   
                   for(i = 0 ; i < tamano ; i++){
                         if(original[i] != segundo[i])
                         cont++;
                         }
                   printf("%d\n", cont);
                   }
    


    system("PAUSE");
    return 0;
}
