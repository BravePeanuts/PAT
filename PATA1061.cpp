#include <iostream>
#include <string>
#include <cctype>
using namespace std;
char msg[7][5] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
int main(){
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int i;
	for(i = 0; i < s1.size() && i < s2.size(); i++){
		if(s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G'){
			cout << msg[s1[i] - 'A'] << " ";
			break;
		}
	}
	for(i = i + 1; i < s1.size() && i < s2.size(); i++){
		if(s1[i] == s2[i]){
			if(isdigit(s1[i])){
				printf("%02d:", s1[i] - '0');
				break;
			}else if(s1[i] >= 'A' && s1[i] <= 'N'){
				printf("%02d:", s1[i] - 'A' + 10);
				break;
			}
		}
	}
	for(i = 0; i < s3.size() && i < s4.size(); i++){
		if(s3[i] == s4[i] && isalpha(s3[i])){
			printf("%02d\n", i);
			break;
		}
	}
	return 0;
}
