#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

	map<int, short> mp;

	int key, value;
	while (!feof(stdin)) {
		cin >> key;
		cin >> value;
		mp[key] = value;
	}


	string res = "no";
	for (auto it : mp){
		if (it.second == -1){
			res = "yes";
			break;
		}
	}
	
	cout << res << endl;

	return 0;
}
