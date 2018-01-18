#include <cstdio>
#include <algorithm>
#include <cstring>
const int maxn = 1e5 + 10;
struct p{
	char name[20];
	int age;
	int wealth;
}person[maxn];
bool cmp(const p& a, const p& b){
	if(a.wealth != b.wealth) return a.wealth > b.wealth;
	else if(a.age != b.age) return a.age < b.age;
	else return strcmp(a.name, b.name) < 0;
}
int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++){
		scanf("%s%d%d", person[i].name, 
						&(person[i].age), 
						&(person[i].wealth));
	}
	std::sort(person, person + n, cmp);
	for(int i = 1; i <= k; i++){
		int count, left, right, flag = 0;
		scanf("%d%d%d", &count, &left, &right);
		printf("Case #%d:\n", i);
		for(int i = 0; i < n; i++){
			if(person[i].age >= left && person[i].age <= right){
				printf("%s %d %d\n", person[i].name, 
									 person[i].age, 
									 person[i].wealth);
				count--; 
				flag = 1;
			}
			if(count == 0) break;
		}
		if(!flag) printf("None\n"); 
	}
	return 0; 
} 
