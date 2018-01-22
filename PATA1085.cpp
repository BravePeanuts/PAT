#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 1e5 + 10;
long long num[maxn];
long long p, n;
int main(){
	scanf("%lld%lld", &n, &p);
	for(int i = 0; i < n; i++) scanf("%lld", num + i);
	sort(num, num + n);
	long long ans = 1;
	for(int i = 0; i < n; i++){
		long long *temp = upper_bound(num + i + 1, num + n, (long long)(num[i] * p));
		if(ans < temp - num - i) ans = temp - num - i; 
	//	printf("%d\n", temp);
	}
	printf("%lld", ans);
	return 0;
} 
