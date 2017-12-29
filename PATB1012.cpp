#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, flag = 1, c[6] = {0,0,0,0,0,0}, counts[6] = {0, 0, 0, 0, 0, 0};
	cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++) cin >> nums[i];
	for(int i = 0; i < n; i++){
		switch(nums[i]%5){
			case 0: counts[1] += nums[i] % 2 == 0 ? (c[1]++, nums[i]) : 0;break;
			case 1: counts[2] += nums[i] * flag; flag *= -1;c[2]++;break; 
			case 2: counts[3]++;c[3]++;break; 
			case 3: counts[4] += nums[i]; c[4]++;break;
			case 4: counts[5] = counts[5] < nums[i]? nums[i] : counts[5]; c[5]++;break;   
		}
	}
	for(int i = 1; i <= 5; i++){
		if(counts[i] == 0 && c[i] == 0) cout << 'N';
		else {
			if(i == 4) printf("%.1lf", counts[4] * 1.0 / c[4]);
			else cout << counts[i];
		}
		if(i == 5) cout << endl;
		else cout << " ";
	} 
	return 0;
} 
