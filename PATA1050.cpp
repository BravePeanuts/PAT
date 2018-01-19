#include <cstring>
#include <cstdio>
const int maxn = 1e4 + 10;
int hashtable[300] = {0};
char str[maxn], c;
int main(){
	gets(str);
	while((c = getchar()) != EOF) hashtable[c]++;
	for(int i = 0; str[i]; i++){
		if(hashtable[str[i]]) continue;
		putchar(str[i]);
	}
	putchar('\n');
	return 0;
}
