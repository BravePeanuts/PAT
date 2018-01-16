#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int a,b,c,i = 0, count = 0;
	cin >> a >> b;
	c = a + b;
	if(c < 0){
		cout << '-';
		c = -c;
	} 
	char ans [11] = {0};
	memset(ans, 0, sizeof(ans));
	do{
		ans[i++] = c % 10 + '0';
		c = c / 10;
		count++;
		if(count % 3 == 0 && c) ans[i++] = ',';
	}while(c);
	for(i = i - 1;i >= 0; i--){
		cout << ans[i];
	}
	cout << endl;
	return 0;
}
