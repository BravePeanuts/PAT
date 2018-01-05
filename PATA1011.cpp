#include <bits/stdc++.h>
using namespace std;
int main(){
	double a, b, c, ans = 1.0;
	int count = 3;
	while(count--){
		cin >> a >> b  >> c;
		double t = max(a, max(b, c));
		if(t == a) cout << "W ";
		else if(t == b) cout << "T ";
		else cout << "L ";
		ans *= t;
	}
	printf("%.2lf\n", (ans * 0.65 - 1) * 2);
	return 0;
}
