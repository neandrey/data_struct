#include <iostream>
#include <list>
#include <vector>

using namespace std;

typedef struct{
	char fio[100];
	vector<char> *marks;
} STUDENT;

int main(){

	list<STUDENT> students;
	vector<char> *new_marks = new vector<char>[3];

	/*
	new_marks[0] = {'2', '3', '4', '5'};
	new_marks[1] = {'5', '3', '5', '2', '5', '5'};
	new_marks[2] = {'2', '4'};
	*/

	students.push_back(STUDENT{"Галий Ю.", &new_marks[0]}); 
	students.push_back(STUDENT{"Аврелий М.", &new_marks[1]});
	students.push_back(STUDENT{"Балакирев С.", &new_marks[2]});
	
	//вывод информации
	/*
	for (auto it = students.begin(); it != students.end(); ++it){
		cout << (*it).fio << ' '; 
			for (int j = 0; j < (*it).marks[0].size(); ++j){ 
				cout << (*it).marks[0][j] << ' ';
			}
			cout << endl;
	}
	*/


	delete[] new_marks;

	return 0;
}
