#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 510;
const int inf = 0x7fffffff;
struct sta{
	double price, dis;
}s[maxn];
bool cmp(const sta& a, const sta& b){
	return a.dis < b.dis;
}
int main(){
	double Cmax, D, Davg;
	int n;
	scanf("%lf%lf%lf%d",&Cmax, &D, &Davg, &n);
	for(int i = 0; i < n; i++){
		scanf("%lf%lf", &(s[i].price), &(s[i].dis));
	}
	s[n].price = 0;
	s[n].dis = D;
	sort(s, s + n, cmp);
	if(s[0].dis != 0){
		printf("The maximum travel distance = 0.00\n");
	}else{
		int now = 0;
		double nowC = 0, maxndis = Cmax * Davg, ans = 0;
		while(now < n){
			int k = -1;
			double priceMin = inf;
			for(int i = now + 1; 
				i <= n && s[i].dis - s[now].dis <= maxndis;i++){
				if(s[i].price < priceMin){
					k = i;
					priceMin = s[i].price;
					if(priceMin < s[now].price){
						break;
					}
				}	
			}
			if(k == -1) break;
			double need = (s[k].dis - s[now].dis) / Davg;
			if(priceMin < s[now].price){
				if(nowC < need){
					ans += (need - nowC) * s[now].price;
					nowC = 0;
				}else{
					nowC -= need;
				}
			}else{
				ans += (Cmax - nowC) * s[now].price;
				nowC = Cmax - need;
			}
			now = k;
		}
		if(now == n){
			printf("%.2lf", ans); 
		}else{
			printf("The maximum travel distance = %.2lf\n", 
				s[now].dis + maxndis);
		}
	}
	return 0;
} 
