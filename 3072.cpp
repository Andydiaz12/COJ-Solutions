#include <cstdio>

using namespace std;
int main(){
int peso_total;

scanf("%d", &peso_total);
            (peso_total <= 2) ? printf("NO\n") :(peso_total%2 == 0) ? printf("YES\n") : printf("NO\n"); 
return 0;
}
