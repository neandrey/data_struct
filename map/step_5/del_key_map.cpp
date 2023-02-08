#include <iostream>
#include <map>

using namespace std;

int main(){

	map<string, int> mp;

	mp.emplace("python", 1);
	mp.emplace("c++", 2);
	mp.emplace("php", 3);
	mp.emplace("java", 4);
	mp.emplace("javascript", 5);

	mp.erase("javascript");

	//для просмотра
	/*
	for (auto it : mp)
		cout << it.first << ' ' << it.second << endl;
	cout << endl;
	*/

	return 0;
}
