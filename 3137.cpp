#include <cstdio>
#include <iostream>
#define fastIO "cin.tie(0); ios_base::sync_with_stdio(false)"
			

using namespace std;

int main(){

	int casos, a, b, c;
	fastIO;
	cin >> casos;

	while(casos--){
		cin >> a >> b >> c;
		if(b != 0)
		((a+b == c) || (a-b == c) || (a*b == c) || (a/b == c) || (a%b == c)) ? cout << "YES" << endl : cout << "NO" << endl;
		else
			((a+b == c) || (a-b == c) || (a*b == c)) ? cout << "YES" << endl : cout << "NO" << endl;

	}


return 0;
}