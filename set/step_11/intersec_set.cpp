#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){

	set<int> a, b, c;

	int x, y;
	while (!feof(stdin)) {
		cin >> x;
		a.insert(x);

		cin >> y;
		b.insert(y);
	}

	set_intersection(a.cbegin(), a.cend(),
			b.cbegin(), b.cend(),
			inserter(c, c.begin()));

	for (auto &it : c)
		cout << it << ' ';
	cout << endl;

	return 0;
}
