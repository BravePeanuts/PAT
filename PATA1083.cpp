#include <cstdio>
#include <algorithm>
const int maxn = 100;
struct stu{
	char name[20];
	char id[20];
	int grade;
}stus[maxn];
bool cmp(const stu& a, const stu& b){
	return a.grade > b.grade; 
}
int main(){
	int n, left, right;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s%s%d", stus[i].name, stus[i].id, &(stus[i].grade));
	}
	scanf("%d%d", &left, &right);
	std::sort(stus, stus + n, cmp);
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(stus[i].grade >= left && stus[i].grade <= right){
			printf("%s %s\n", stus[i].name, stus[i].id);
			flag = 1;
		}
	}
	if(!flag) printf("NONE\n");
	return 0;
}
