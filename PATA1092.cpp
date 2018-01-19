#include <cstdio>
#include <cstring>
int hashtable[300] = {0};
int main(){
	char str1[1010], str2[1010];
	gets(str1);gets(str2);
	int len1 = strlen(str1), len2 = strlen(str2);
	for(int i = 0; i < len1; i++) hashtable[str1[i]]++;
	for(int i = 0; i < len2; i++) hashtable[str2[i]]--;
	int neg = 0, pos = 0;
	for(int i = 0; i < 300; i++){
		if(hashtable[i] > 0) pos += hashtable[i];
		else neg -= hashtable[i]; 
	}
	if(neg){
		printf("No %d\n", neg);
	}else{
		printf("Yes %d\n", pos);
	}
	return 0;
}
