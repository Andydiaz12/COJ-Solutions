#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
    
    
    int  letras;
    
    scanf("%d", &letras);
    char cadena[letras];
    scanf("%s", cadena);
    
    sort(cadena, cadena+letras);
    printf("%c\n", cadena[(letras/2)]);
    

return 0;
}
