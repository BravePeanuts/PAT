#include <bits/stdc++.h>
using namespace std;
int main(){
	int c1, c2, ans;
	cin >> c1 >> c2;
	ans = c2 - c1;
	if(ans % 100 >=  50) ans = ans + 100;
	printf("%02d:%02d:%02d\n", (ans / 100) / 3600, 
								(ans / 100) % 3600 / 60,
								(ans / 100) % 3600 % 60); 
	return 0;
}
