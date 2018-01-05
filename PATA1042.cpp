#include <bits/stdc++.h>
using namespace std;
char *bigger = "SHCDJ";
void print(int n){
	cout << bigger[n / 13] << n % 13 + 1;
}
int main(){
	int change[60], from[60],to[60], n;
	cin >> n;
	for(int i = 1; i <= 54; i++){
		cin >> change[i];
		from[i] = i;
	}
	while(n--){
		for(int i = 1; i <= 54; i++){
			to[change[i]] = from[i];
		}
		for(int i = 1; i <= 54; i++){
			from[i] = to[i];
		}
	}
	for(int i = 1; i <= 54; i++){
		print(to[i] - 1);
		if(i != 54) cout << " ";
		else cout << endl;  
	}
	return 0;
}
