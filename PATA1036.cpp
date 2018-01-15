#include <bits/stdc++.h>
using namespace std;
struct student{
	string name;
	string sex;
	string course;
	int grade;
}temp, male = {"", "", "", 101}, female = {"", "", "", -1};
int main(){
	int n;
	cin >> n;
	while(n--){
		cin >> temp.name >> temp.sex >> temp.course >> temp.grade;
		if(temp.sex == "F" && temp.grade > female.grade) female = temp;
		if(temp.sex == "M" && temp.grade < male.grade) male = temp;
	} 
	if(female.grade == -1) cout << "Absent" << endl;
	else cout << female.name << " " << female.course << endl;
	if(male.grade == 101) cout << "Absent" << endl;
	else cout << male.name << " " << male.course << endl;
	if(female.grade == -1 || male.grade == 101) cout << "NA" << endl;
	else cout << female.grade - male.grade << endl;
	return 0; 
}
