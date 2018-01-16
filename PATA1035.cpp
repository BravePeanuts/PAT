#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	int n, cc;
	cin >> n;
	cc = n;
	vector<pair<string, string> > ans;
	while(cc--){
		int flag = 0;
		string id, password;
		cin >> id >> password;
		for(int i = 0; i < password.size(); i++){
			switch(password[i]){
				case '1': password[i] = '@', flag = 1; break;
				case '0': password[i] = '%', flag = 1; break;
				case 'l': password[i] = 'L', flag = 1; break;
				case 'O': password[i] = 'o', flag = 1; break;
			}
		}
		if(flag) ans.push_back(make_pair(id, password));
	}
	if(ans.size() == 0){
		if(n == 1) cout << "There is 1 account and no account is modified" << endl;
		else cout << "There are " << n << " accounts and no account is modified" << endl;
	}else{
		cout << ans.size() << endl;
		for(int i = 0; i < ans.size(); i++){
			cout << ans[i].first << " " << ans[i].second << endl;
		} 
	}
	return 0;
}
