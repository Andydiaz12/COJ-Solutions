#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int juez[10], sum, participantes, i, persona=0;
	scanf("%d", &participantes);
	while(participantes--){
		sum=0;
		for(i=0; i<10; i++)
			scanf("%d", &juez[i]);
		    sort(juez, juez+10);
		for(i=0; i<8; i++)
			sum+=juez[i+1];
			printf("%d %d\n",persona+1, sum);
			persona++;
	}
	
	return 0;
}
