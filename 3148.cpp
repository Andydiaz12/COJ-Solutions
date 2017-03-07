#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
	
	int casos, tablero[8][8], i ,I, pos, pos1;
	char c;
	
	memset(tablero, 0, sizeof(tablero));
	
	for(i=0 ; i<8; i++){
		for(I = 0; I<8; I=I+2)
			(i%2 == 0) ? tablero[i][I] = 1 : tablero[i][I+1] = 1;
	}

	
	scanf("%d", &casos);
	
	while(casos--){
		getchar();
		scanf("%c %d", &c, &pos);
		if(c == 'a')
		pos1 = 0;
		else if(c == 'b')
		pos1 = 1;
		else if (c == 'c')
		pos1 = 2;
		else if (c == 'd')
		pos1 = 3;
		else if (c == 'e')
		pos1 = 4;
		else if (c == 'f')
		pos1 = 5 ;
		else if (c == 'g')
		 pos1 = 6 ;
		 else if (c == 'h') 
		 pos1 = 7;
		 
		 (tablero[pos1][pos-1] == 1) ? printf("WHITE\n") : printf("BLACK\n");
	}
	
	
	
	
	
	return 0;
}
