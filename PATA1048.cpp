#include <cstdio>
#include <algorithm>
const int maxn = 1e5 + 10;
int hashtable[maxn] = {0}, num[maxn] = {0}, n, m;
int main(){
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%d", num + i);
		hashtable[num[i]]++;
	}
	std::sort(num, num + n);
	int flag = 1;
	for(int i = 0; i < n; i++){
		if(hashtable[m - num[i]]){
			if(num[i] == m - num[i] && hashtable[num[i]] < 2) continue;
			printf("%d %d\n", num[i], m - num[i]);
			flag = 0;
			break;
		}
	}
	if(flag) printf("No Solution\n");
	return 0;
}
