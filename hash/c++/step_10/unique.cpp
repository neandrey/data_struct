#include <iostream>
#include <unordered_set>

using namespace std;

int main(void)
{
	unordered_set<int> unique;

	unique.insert(1);
	unique.insert(2);
	unique.insert(3);
	unique.insert(5);
	unique.insert(7);
	unique.insert(11);
	unique.insert(2);
	unique.insert(3);
	unique.insert(5);
	unique.insert(7);

	/*
	 * для просмотра результата
	for (auto it: unique)
		cout << it << ' ';
	cout << endl;
	*/

   return 0;
}
