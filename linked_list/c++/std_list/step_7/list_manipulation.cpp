#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(){
	list<int> lst;
	vector<list<int>::iterator> pos;

	int x;
	while (!feof(stdin)){
		cin >> x;
		lst.push_back(x);
	}

	if (lst.size() >= 2){
		auto pos_it = lst.cbegin();
		int n = 2;
		for(int i = 0; i < n; ++pos_it, ++i);
		lst.insert(pos_it, -1);
	}

	for(auto it = lst.begin(); it != lst.end(); ++it){
		if (*it == 22 or *it == 8){
			pos.push_back(it);
		}
	}

	for(auto it = pos.begin(); it != pos.end(); ++it){
		lst.erase(*it);
	}
	cout << endl;

	lst.push_back(100);
	lst.push_front(-100);

	for(auto it = lst.cbegin(); it != lst.cend(); ++it)
		cout << *it << ' ';
	cout << endl;

	return 0;
}
