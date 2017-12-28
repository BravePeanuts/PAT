#include <bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	int da, db, pa = 0, pb = 0;
	cin >> a >> da >> b >> db;
	for(auto c : a){
		if(c == da + '0') 
			pa = pa * 10 + da;
	}
	for(auto c : b){
		if(c == db + '0') 
			pb = pb * 10 + db;
	}
	cout << pa + pb << endl;
	return 0;
}
