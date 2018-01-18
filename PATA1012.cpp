#include <cstdio>
#include <algorithm>
struct stu{
	int id;
	int score[4];
	int rank[4];
}stus[2018];
int flag = 0;
bool cmp(const stu& a, const stu& b){
	return a.score[flag] > b.score[flag];
} 
int main(){
	int n, m;
	char msg[] = "EMCA"; 
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%d%d%d%d", &(stus[i].id), //这个顺序就无需对优先级进行特殊处理了 
						&(stus[i].score[2]), 
						&(stus[i].score[1]), 
						&(stus[i].score[0]));
		stus[i].score[3] = 0;
		for(int j = 0; j < 3; j++) stus[i].score[3] += stus[i].score[j];
		stus[i].score[3] /= 4;
	}
	for(flag = 0; flag < 4; flag++){
		std::sort(stus, stus + n, cmp);
		stus[0].rank[flag] = 1;
		for(int i = 1; i < n; i++){
			if(stus[i].score[flag] == stus[i - 1].score[flag]){
				stus[i].rank[flag] = stus[i - 1].rank[flag];
			}else{
				stus[i].rank[flag] =  i + 1;
			}
		}
	}
	while(m--){
		int query, pos = 0;
		scanf("%d", &query);
		while(stus[pos].id != query && pos < n) pos++;
		if(pos == n) printf("N/A\n");
		else {
			int min = 0x7fffffff, backup = -1;
			for(int i = 0; i < 4; i++){
				if(min >= stus[pos].rank[i]){
					min = stus[pos].rank[i];
					backup = i;
				}
		//		printf("%d ", stus[pos].rank[i]);
			}
		//	printf("\n");
			printf("%d %c\n", min, msg[backup]);
		}
	}
	return 0;
}
