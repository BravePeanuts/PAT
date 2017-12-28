#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a, b, c, n, i = 1;
	cin >> n;
	while(n--){
		cin >> a >> b >> c;
		if(a + b > c) printf("Case #%d: true\n", i++);
		else printf("Case #%d: false\n", i++);
	} 
	return 0;
}
