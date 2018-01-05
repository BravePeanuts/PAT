#include <bits/stdc++.h>
using namespace std;
double p[2010] = {0.0}, q1[1010] = {0.0}, q2[1010] = {0.0};
int main(){
	int n, exp, count = 0;
	double coff;
	cin >> n;
	while(n--){
		cin >> exp >> coff;
		q1[exp] += coff;
	}
	cin >> n;
	while(n--){
		cin >> exp >> coff;
		q2[exp] += coff;
	}
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= 1000; j++){
			p[i + j] += q1[i] * q2[j];
		}
	}
	for(int i = 0; i <= 2000; i++){
		if(fabs(p[i]) < 1e-8) continue;
		count++;
	}
	cout << count;
	for(int i = 2000; i >=0; i--){
		if(fabs(p[i]) < 1e-8) continue;
		printf(" %d %.1lf", i, p[i]); 
	}
	cout << endl;
	return 0;
}
