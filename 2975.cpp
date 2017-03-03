#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int N, P, valores[3], pagina, mitad, n_hoja;
    
    do{
        pagina=mitad=0;
        scanf("%d", &N);
        if(N == 0)
        break;
        else{
             scanf("%d", &P);
             if(P != N && P != (N-1)){
             (P%2 == 0)?valores[0]=P-1:valores[0]=P+1;
             if(P%2 != 0){
                    P=P+1;
                    }
             if(P%2 == 0){
                    mitad=P/2;
                    if(mitad > (N/4)){
                             if((mitad-1) == (N/4)){
                             valores[1]=P-3;
                             valores[2]=P-2;
                             }
                             else{
                    n_hoja=((N-P)/2)+1;
                    n_hoja*=2;
                    valores[1]=n_hoja;
                    valores[2]=n_hoja-1;
                             }
                             }
                    else if(mitad <= (N/4)){
                    n_hoja=(N/4)+((N/4)-mitad)+1;
                    n_hoja*=2;
                    valores[1]=n_hoja;
                    valores[2]=n_hoja-1;
                         }
                         
                    
                    }
                    }
             else if(P == N){ 
                  valores[0]=1;
                  valores[1]=2;
                  valores[2]=P-1;
                  }
             else if (P == (N-1)){
                  valores[0]=1;
                  valores[1]=2;
                  valores[2]=P+1;
                  }
      sort(valores,valores+3);
             printf("%d %d %d\n", valores[0], valores[1], valores[2]);
             
             }
        }while(N != 0);
    
return 0;
}

