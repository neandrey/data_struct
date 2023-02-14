#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

	map<string, vector<string>> metro;
	vector<string> v1 = {"Китай-город 2", "Кузнецкий мост"};

	vector<string> v2 = {"Китай-город 1", "Тургеневская"};
    
	vector<string> v3 = {"Китай-город 1", "Лубянка"};

	vector<string> v4 = {"Кузнецкий мост", "Чистые пруды"};                           

	vector<string> v5 = {"Лубянка", "Сретенский бульвар", "Тургеневская"};

	vector<string> v6 = {"Тургеневская", "Чистые пруды" };

	vector<string> v7 = {"Китай-город 2", "Сретенский бульвар", "Чистые пруды"};	
 
	metro.emplace("Китай-город 1", v1);
	metro.emplace("Китай-город 2", v2);
	metro.emplace("Кузнецкий мост", v3);
	metro.emplace("Лубянка", v4);
	metro.emplace("Чистые пруды", v5);
	metro.emplace("Сретенский бульвар", v6);
	metro.emplace("Тургеневская", v7);

  /*
	 * для просмотра результата
	for (auto it : metro){
		cout << it.first << endl; 
		for(auto it_vect : it.second)
			cout << it_vect << ' ';
		cout << endl;
	}
	cout << endl;
	*/

	return 0;
}
