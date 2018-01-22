#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 1e5 + 10;
int num1[maxn] = {0}, num2[maxn] = {0};
int main(){
	int nc, np;
	scanf("%d", &nc);
	for(int i = 0; i < nc; i++){
		scanf("%d", num1 + i);
	}
	scanf("%d", &np);
	for(int i = 0; i < np; i++){
		scanf("%d", num2 + i);
	}
	sort(num1, num1 + nc), sort(num2, num2 + np);
	int i = 0, j = 0 , ans = 0;
	while(i < nc && i < np && num1[i] < 0 && num2[i] < 0){
		ans += num1[i] * num2[i];
		i++;
	}
	i = nc - 1, j = np - 1;
	while(i >= 0 && j >= 0 && num1[i] > 0 && num2[j] > 0){
		ans += num1[i] * num2[j];
		i--;
		j--;
	}
	printf("%d", ans);
	return 0;
}
