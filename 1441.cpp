#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int i, num[3];
	do{
		for(i=0; i<3; i++)
		scanf("%d", &num[i]);
		
		
		if(num[0] != 0 && num[1] != 0 && num[2] != 0){
		sort(num,num+3);
		if(sqrt(pow(num[0], 2)+pow(num[1], 2)) == num[2])
		printf("right\n");
		else
		printf("wrong\n");
	    }
	}while(num[0] != 0 && num[1] != 0 && num[2] != 0);
	return 0;
}
