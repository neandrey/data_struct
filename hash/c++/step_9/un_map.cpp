#include <iostream>
#include <unordered_map>

using namespace std;
int main(void)
{
	unordered_map<string, short> db;

	db.emplace("one", 1);
	db.emplace("four", 4);
	db.emplace("five", 5);
	db.emplace("even", 2);
	
	db.erase(db.find("four"));

	//для просмотра результата
	/*
	for (auto it : db)
		cout << it.first << ' ' << it.second << endl;
		*/

    return 0;
}
