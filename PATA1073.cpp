#include <iostream>
#include <string>
using namespace std;
int main(){
	string num;
	cin >> num;
	if(num[0] == '-') cout << "-";
	int pos = 0, exp = 0;
	while(num[pos] != 'E') pos++;
	for(int i = pos + 2; i < num.size(); i++){
		exp = exp * 10 + (num[i] - '0');
	}
	if(exp == 0){
		for(int i = 1; i < pos; i++) cout << num[i];
		return 0;
	}
	if(num[pos + 1] == '-'){
		cout << "0.";
		for(int i = 0; i < exp - 1; i++){
			cout << "0";
		}
		cout << num[1];
		for(int i = 3; i < pos; i++){
			cout << num [i];
		} 
	}else{
		for(int i = 1; i < pos; i++){
			if(num[i] == '.') continue;
			printf("%c", num[i]);
			if(i == exp + 2 && pos - 3 != exp){
				cout << ".";
			} 
		}
		for(int i = 0; i < exp - (pos- 3); i++){
			cout << "0";
		} 
	}
	return 0;
} 
