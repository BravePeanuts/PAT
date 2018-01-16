#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n, minlen = 0x3fffffff;
	cin >> n;
	string strs[n];
	getchar(); 
	for(int i = 0; i < n; i++){
		getline(cin, strs[i]); 
	}
	for(int i = 0; i < n; i++){
		reverse(strs[i].begin(), strs[i].end());
		if(strs[i].size() < minlen) minlen = strs[i].size();
	}
	int ans = 0;
	for(int i = 0; i < minlen; i++){
		int flag = 0;
		for(int j = 1; j < n; j++){
			if(strs[0][i] != strs[j][i]){
				flag = 1;
				break;
			}
		}
		if(flag) break;
		else ans++;
	}
	if(ans == 0) cout << "nai" << endl;
	else {
		for(int i = ans - 1; i >= 0; i--){
			cout << strs[0][i];
		}
	} 
	return 0;
}
