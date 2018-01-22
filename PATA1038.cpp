#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int maxn = 1e4 + 10;
bool cmp(const string& a, const string& b){
	return a + b < b + a;
}
string num[maxn];
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> num[i];
	sort(num, num + n, cmp);
	int flag = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < num[i].size(); j++){
			if(num[i][j] == '0' && !flag) continue;
			cout << num[i][j];
			flag = 1;
		}
	}
	if(flag == 0) cout << '0';
	cout << endl;
	return 0;
} 
