#include <cstdio>
#include <algorithm>
const int maxn = 1e3 + 10;
struct mooncake{
	double totalstore;
	double totalprice;
	double eachprice;
}mooncakes[maxn];
bool cmp(const mooncake& a, const mooncake& b){
	return a.eachprice > b.eachprice; 
}
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%lf", &(mooncakes[i].totalstore));
	}
	for(int i = 0; i < n; i++){
		scanf("%lf", &(mooncakes[i].totalprice));
		mooncakes[i].eachprice = mooncakes[i].totalprice 
								/ mooncakes[i].totalstore;
	}
	std::sort(mooncakes, mooncakes + n, cmp);
	double ans = 0;
	for(int i = 0; i < n; i++){
		if(m == 0) break;
		if(m >= mooncakes[i].totalstore){
			m -= mooncakes[i].totalstore;
			ans += mooncakes[i].totalprice;
		} else {
			ans += m * mooncakes[i].eachprice;
			m = 0;
		}
	}
	printf("%0.2lf", ans);
	return 0;
} 
