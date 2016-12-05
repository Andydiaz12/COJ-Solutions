#include <cstdio>
using namespace std;

int main(){
	int casos, num1, num2, resultado;
	char operacion, resultado_signo;
	scanf("%d", &casos);
	while(casos--){
		scanf("%d %c %d %c %d", &num1, &operacion, &num2, &resultado_signo, &resultado);
	
		switch(operacion){
			case '+':
				((num1+num2) == resultado)?printf("Yes\n"):printf("No\n");
				break;
			case '-':
				((num1-num2) == resultado)?printf("Yes\n"):printf("No\n");
				break;
			case '*':
				((num1*num2) == resultado)?printf("Yes\n"):printf("No\n");
				break;
			case '/':
				if(num2 != 0){
				((num1/num2) == resultado)?printf("Yes\n"):printf("No\n");
				break;
			}
				else{
					printf("No\n");
				}
		}
	}
	
	return 0;
}
