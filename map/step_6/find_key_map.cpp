#include <iostream>
#include <map>

using namespace std;

int main(){

	map<int, short> mp;

	int key, value;
	while (!feof(stdin)) {
		cin >> key;
		cin >> value;
		mp[key] = value;
	}

	auto it = mp.find(7);
	
	it == mp.end() ? cout << "no" : cout << "yes";
	cout << endl;

	return 0;
}
