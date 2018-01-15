#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	int n1, n2, n3;
	cin >> str;
	n1 = n3 = (str.size() + 2) / 3;
	n2 = str.size() - n1 * 2;
	for(int i = 0; i < n1 - 1; i++){
		printf("%c", str[i]);
		for(int j = 0; j < n2; j++){
			printf(" ");
		}
		printf("%c\n", str[str.size() - i - 1]);
	}
	for(int i = 0; i <= n2 + 1; i++){
		printf("%c", str[n1 + i - 1]);
	}
	return 0;
} 
