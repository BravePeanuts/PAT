#include <cstdio>
#include <cstring>
#include <algorithm>
int n,c;
struct record{
	char id[10];
	char name[10];
	int score;
}records[100010];
bool cmp(const record& a, const record& b){
	switch(c){
		case 1:return strcmp(a.id, b.id) < 0 ;
		case 2:return strcmp(a.name, b.name) == 0 ? 
							strcmp(a.id, b.id) < 0 :
							strcmp(a.name, b.name) < 0;
		case 3:return a.score == b.score ?
						strcmp(a.id, b.id) < 0 :
						a.score < b.score;
	}
}
int main(){
	scanf("%d %d", &n, &c);
	for(int i = 0; i < n; i++){
		scanf("%s%s%d", records[i].id, 
						  records[i].name, 
						  &(records[i].score));
	}
	std::sort(records, records + n, cmp);
	for(int i = 0; i < n; i++){
		printf("%s %s %d\n", records[i].id, 
						    records[i].name, 
						    (records[i].score));
	}
	return 0;
}
