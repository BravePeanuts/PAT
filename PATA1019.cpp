#include <bits/stdc++.h>
#define MAXN 50
using namespace std;
int  z[MAXN], len = 0;
bool Judge(){
	for(int i = 0; i <= len / 2; i++){
		if(z[i] != z[len - i - 1]) return false;
	}
	return true;
} 
int main(){
	int n, d;
	scanf("%d %d", &n, &d);
	do{
		z[len++] = n % d;
		n /= d;
	}while(n);
	if(Judge()) cout << "Yes" << endl;
	else cout << "No" << endl;
	for(int i = len - 1; i >= 0; i--){
		cout << z[i];
		if(i) cout << " ";
		else cout << endl; 
	}
	return 0;
}
