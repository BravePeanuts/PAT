#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, q;
	cin >> n;
	vector<int> nums(n + 2);
	nums[1] = 0;
	for(int i = 2; i <= n + 1; i++){
		int d;
		cin >> d;
		nums[i] = nums[i - 1] + d;
	}
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		if(a > b) swap(a, b); 
		int d1 = nums[b] - nums[a], d2 = nums[n + 1] - d1;
		cout << min(d1, d2) << endl;
		
	}
	return 0;
} 
