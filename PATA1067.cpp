#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 1e5 + 10;
int num[maxn], n;
int main(){
	scanf("%d", &n);
	int left = n - 1;
	for(int i = 0; i < n; i++){
		int temp;
		scanf("%d", &temp);
		num[temp] = i;
		if(temp == i && i != 0) left--; 
	}
	int ans = 0, i = 1;
	while(left > 0){
		if(num[0] == 0){
			while(i < n){
				if(num[i] != i){
					swap(num[0], num[i]);
					ans++;
					break;
				}
				i++;
			} 
		}
		while(num[0] != 0){
			swap(num[0], num[num[0]]);
			left--;
			ans++;
		} 
	}
	printf("%d", ans);
	return 0;
} 
