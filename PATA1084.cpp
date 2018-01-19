#include <cstring>
#include <cstdio>
#include <cctype>
int hashtable[300] = {0};
int main(){
	char str1[85], str2[85];
	gets(str1);gets(str2);
	int len1 = strlen(str1), len2 = strlen(str2);
	for(int i = 0; i < len1; i++){
		int j;
		char c1 = toupper(str1[i]), c2;
		for(j = 0; j < len2; j++){
			c2 = toupper(str2[j]);
			if(c1 == c2) break;
		}
		if(j == len2 && hashtable[c1] == 0){
			printf("%c", toupper(c1));
			hashtable[c1] = 1;
		}
	}
	return 0;
}
