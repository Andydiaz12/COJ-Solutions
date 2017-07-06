#include <cstdio>
#include <cstdlib>

using namespace std;

class nodo{
	private:
		long int valor;
	public:
		nodo *next;
		nodo(long int x){
				valor = x;
				next = NULL;
				
		}
		
		long int getValor(){
			return valor;
		}
		
};

class stack{
	private:
		nodo *top, *tail;
	public:
		stack(){
			top = tail = NULL;
		}
		
		void push(stack s, long int x){
			nodo *nuevo = new nodo(x);
			
			if(isEmpty(s))
				top = tail = nuevo;
			else{
				nuevo -> next = tail;
				tail = nuevo; 
			}
		}
		
		long int pop(stack s){
			long int valor_temp = tail -> getValor();
			if(isEmpty(s))
				exit(1);
			else{
				nodo *temporal = tail;
								
				tail = tail -> next;
				delete(temporal);	
			}
			return valor_temp;
		}
		
		bool isEmpty(stack s){
			return (tail == NULL);
		}
	
};

int main(){
	
	long int numero;
	stack s;
	
	while(scanf("%ld", &numero) && numero != -1){
		while(numero != 0){
		s.push(s, (numero%3));
		numero=numero/3;
		}
		while(!s.isEmpty(s)){
		printf("%ld", s.pop(s));
		}
		
		printf("\n");
	}
	
	return 0;
}