#include <cstdio>
#include <algorithm>
#include<math.h>
using namespace std;

int main(){
	int H1=1, M1=1, H2=1, M2=1, x;
	while((H1 != 0) || (H2 != 0) || (M1 != 0) || (M2 != 0)){
		x=0;
	scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
	if((H1 == 0) && (H2 == 0) && (M1 == 0) && (M2 == 0))
	break;
	else if(H1 < H2)
		x=((H2*60)+M2)-((H1*60)+M1);
		
	else if(H1>H2){ 
		x=((23-H1)*60)+(60-M1)+(H2*60)+M2;
	}	
	else if(H1 == H2){
		if(M1 < M2)
		x=M2-M1;
		else if(M1 > M2)
		x=(23*60)+(60-M1+M2);
	}
	printf("%d\n", x);
	}
	return 0;
}
