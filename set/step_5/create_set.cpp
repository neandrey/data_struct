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

	for (auto it : s)
		cout << it << ' ';
	cout << endl;

	return 0;
}
