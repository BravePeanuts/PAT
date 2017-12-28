//https://www.patest.cn/contests/pat-b-practise/1046 
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, Acall, Ashow, Bcall, Bshow, ans[2] = {0,0};
	cin >> n;
	while(n--){
		cin >> Acall >> Ashow >> Bcall >> Bshow;
		if(Acall + Bcall == Ashow && Acall + Bcall != Bshow) ans[1]++;
		else if(Acall + Bcall != Ashow && Acall + Bcall == Bshow) ans[0]++;
	}
	cout << ans[0] << " " << ans[1] << endl;
	return 0;
}
