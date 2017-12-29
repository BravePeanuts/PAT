#include <bits/stdc++.h>
using namespace std;
void r(vector<int>& a,int offset){
	reverse(end(a) - offset, end(a));
	reverse(begin(a), end(a) - offset);
	reverse(begin(a), end(a));
}
int main(){
	int n, m;
	cin >> n >> m;
	m = m % n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	r(a, m);
	for(int i = 0; i < n; i++){
		if(i) cout << " " << a[i];
		else cout << a[i]; 
	}
	cout << endl; 
	return 0;
} 
