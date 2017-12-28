#include <bits/stdc++.h>
using namespace std;
int main(){
	int count = 0, n; 
	cin >> n;
	while(n > 1){
		if(n % 2) n = ((3 * n) + 1) / 2;
		else n = n / 2;
		count++;
	} 
	cout << count << endl;
	return 0;
} 
