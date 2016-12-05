#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(){
	float wp1=0, wp2=0;
	int i=0, n, k, p1, p2;
	char m1[9], m2[9];
	do{
		wp1=wp2=0;
		scanf("%d", &n);
		if(n == 0){
			break;
		}
		else {
			scanf("%d", &k);
		for(i=0; i<k; i++){
			scanf("%d %s %d %s", &p1, m1, &p2, m2);
			getchar();
			if(p1 == 1){
			if((m1[0] == 's' && m2[0] == 'p') || (m1[0] == 'p' && m2[0] == 'r') || (m1[0] == 'r' && m2[0]=='s'))
			wp1++;
			else if((m2[0] == 's' && m1[0] == 'p') || (m2[0] == 'p' && m1[0] == 'r') || (m2[0] == 'r' && m1[0]=='s'))
			wp2++;
		}
		else if (p1 == 2){
			if((m1[0] == 's' && m2[0] == 'p') || (m1[0] == 'p' && m2[0] == 'r') || (m1[0] == 'r' && m2[0]=='s'))
			wp2++;
			else if((m2[0] == 's' && m1[0] == 'p') || (m2[0] == 'p' && m1[0] == 'r') || (m2[0] == 'r' && m1[0]=='s'))
			wp1++;
			
		}
	
		}
			printf("%.3f\n%.3f\n", (wp1/(wp1+wp2)), (wp2/(wp1+wp2)));
}
	}while(n != 0);
	return 0;
}
