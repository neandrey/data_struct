#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
typedef struct {
	char name[100];
	int weight;
	short old;
} EXHIBIT;

bool compareOld(EXHIBIT e1, EXHIBIT e2){
	return (e1.old < e2.old);
}

int main(){
	
	list<EXHIBIT> exhibits;
	list<EXHIBIT> exhibits_copy;

	exhibits.push_back(EXHIBIT{"Евангелие от Матфея", 1020, 800});
	exhibits.push_back(EXHIBIT{"Евангелие от Марка", 1100, 921});
	exhibits.push_back(EXHIBIT{"Евангелие от Иоанна", 1205, 1024});
	exhibits.push_back(EXHIBIT{"Python от ван Россума", 256, 32});
	exhibits.push_back(EXHIBIT{"С++ от Страуструпа", 128, 28});
	exhibits.push_back(EXHIBIT{"Структуры данных от Балакирева", 16, 1});


	copy(exhibits.begin(), exhibits.end(), inserter(exhibits_copy, exhibits_copy.begin()));

	exhibits_copy.sort(compareOld);
/*
 for (auto it = exhibits.cbegin(); it != exhibits.cend(); ++it)
	 cout << (*it).weight<< ' ';
 cout << endl;
 */

 for (auto it = exhibits_copy.cbegin(); it != exhibits_copy.cend(); ++it)
	 cout << (*it).weight << ' ';
 cout << endl;

	return 0;
}
