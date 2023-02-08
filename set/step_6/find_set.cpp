#include <iostream>
#include <set>

using namespace std;

int main(){

	set<short> s;

	short x;
	while (!feof(stdin)) {
		cin >> x;
		s.insert(x);
	}

	auto value = s.find(10);

	value != s.end() ? cout << "true" : cout << "false";
	cout << endl;

	return 0;
}
