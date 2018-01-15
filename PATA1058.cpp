//https://www.patest.cn/contests/pat-a-practise/1058
#include <cstdio>
int main(){
	int a[3], b[3], c[3] = {0,0,0}, carry = 0, r[3] = {1, 17, 29};
	scanf("%d.%d.%d %d.%d.%d", a, a+1, a+2, b, b+1, b+2);
	for(int i = 2; i > 0; i--){
		c[i] = (a[i] + b[i] + carry ) % r[i];
		carry = (a[i] + b[i] + carry) / r[i];
	}
	c[0] = (a[0] + b[0]) + carry;
	printf("%d.%d.%d\n", c[0], c[1],c[2]);
	return 0;
}
