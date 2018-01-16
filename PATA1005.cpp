#include <iostream>
using namespace std;
char msg[10][10] = {
	"zero","one", "two", "three", "four", "five", "six", "seven", "eight","nine"
};
int ans = 0;
void dfs(int num){
	if(num == 0){
		return;
	} 
	dfs(num / 10);
	cout << msg[num % 10];
	if(num != ans) cout << " ";
	else cout << endl;
} 
int main(){
	char c;
	while((c = getchar()) != '\n'){
		ans += (c - '0');
	}
//	cout << ans << endl;
	if(ans != 0) dfs(ans);
	else cout << msg[0];
	return 0;
}
