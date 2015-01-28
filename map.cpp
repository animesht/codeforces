#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	
	map <string, char> grades;
	map <char, int> ctr;
	string cmd;

	while (!cin.eof()) {
		cout<<"> ";
		cin>>cmd;
	if (cmd == "SET") {
		string name;
		cin>>name;
		char grade;
		cin>>grade;
		grades[name] = grade;
		cout<<"SET successful:\t"<<name<<"\t"<<grade<<endl;
		if (ctr.find(grade)!= ctr.end()) {
			ctr[grade]++;
		}
		else {
			ctr[grade] = 1;
		}
	}

	else if (cmd == "GET") {

		string name;
		cin>>name;
		if (grades.find(name)!= grades.end()) 
			cout<<grades[name]<<endl;
		else 
			cout<<"Student not found"<<endl;
	}

	else if (cmd == "GETGRADES") {
		char grade;

		cin>>grade;
		cout<<ctr[grade]<<endl;
	}

	else if(cmd == "EXIT") {
		exit(0);
	}

	}
	return 0;
}
