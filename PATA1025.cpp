#include <cstdio>
#include <algorithm>
#include <cstring>
const int maxn = 30010;
struct stu{
	char id[20];
	int location_number;
	int score;
	int local_rank;
	int rank;
}stus[maxn]; 
bool cmp(const stu& a,const stu& b){
	if(a.score != b.score) return a.score > b.score;
	else return strcmp(a.id, b.id) < 0;
}
int main(){
	int n, start = 0, end;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int m;
		scanf("%d", &m);
		end = start + m;
		for(int j = start; j < end; j++){
			scanf("%s %d", stus[j].id, &(stus[j].score));
			stus[j].location_number = i + 1;
		}
		std::sort(stus + start, stus + end, cmp);
		stus[start].local_rank = 1;
		for(int j = 1; j < m; j++){
			if(stus[start + j].score == stus[start + j - 1].score){
				stus[start + j].local_rank = stus[start + j - 1].local_rank;
			}else{
				stus[start + j].local_rank = j + 1;
			}
		}
		start = end;
	}
	std::sort(stus, stus + end, cmp);
	printf("%d\n", end);
	stus[0].rank = 1;
	for(int j = 1; j < end; j++){
		if(stus[j].score == stus[j - 1].score){
			stus[j].rank = stus[j - 1].rank;
		}else{
			stus[j].rank = j + 1;
		}
	} 
	for(int i = 0; i < end; i++){
		printf("%s %d %d %d\n", stus[i].id, 
								stus[i].rank, 
								stus[i].location_number, 
								stus[i].local_rank);
	}
	return 0; 
}
