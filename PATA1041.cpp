#include <cstdio>
const int maxn = 1e5 + 10;
int num[maxn] = {0}, n, hashtable[maxn] = {0};
int main(){
	int max = -0x7fffffff, flag = 1;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", num + i);
		hashtable[num[i]]++;
		if(num[i] > max) max = num[i];
	}
	for(int i = 0; i < n; i++){
		if(hashtable[num[i]] == 1){
			printf("%d", num[i]);
			flag = 0;
			break;
		}
	}
	if(flag) printf("None\n");
	return 0;
}
