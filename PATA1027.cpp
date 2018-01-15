#include <iostream>
using namespace std;
char *msg = "0123456789ABC";
int main(){
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	printf("#");
	for(int i = 0; i < 3; i++){
		printf("%c%c", msg[a[i] / 13], msg[a[i] % 13]);
	}
	return 0;
}
