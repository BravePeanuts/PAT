#include <bits/stdc++.h>
using namespace std;
struct student{
	string name;
	string in;
	string out;
}temp, first = {"", "23:59:59", ""}, last = {"", "", "00:00:00"};
int main(){
	int n;
	cin >> n;
	while(n--){
		cin >> temp.name >> temp.in >> temp.out;
		if(temp.in < first.in) first = temp;
		if(temp.out > last.out) last = temp;
	} 
	cout << first.name << " " << last.name << endl;
	return 0; 
}
