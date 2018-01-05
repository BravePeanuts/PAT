#include <bits/stdc++.h>
using namespace std;
double p[1010] = {0.0};
int main(){
	int n, exp, count = 2;
	double coff;
	while(count--){
		cin >> n;
		while(n--){
			cin >> exp >> coff;
			p[exp] += coff;
		}
	}
	count = 0;
	for(int i = 0; i <= 1000; i++){
		if(fabs(p[i]) < 1e-8) continue;
		count++;
	}
	cout << count;
	for(int i = 1000; i >=0; i--){
		if(fabs(p[i]) < 1e-8) continue;
		printf(" %d %.1lf", i, p[i]); 
	}
	cout << endl;
	return 0;
}
