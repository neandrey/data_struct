#include <iostream>
#include <list>

using namespace std;

int main(){
	list<int> lst;

	lst.push_back(1);
	lst.push_front(4);
	lst.push_front(-4);
	lst.push_back(-1);

	auto pos_it = lst.cbegin();
	lst.insert(++pos_it, 100);

	if (!lst.empty()){
		cout << lst.front() << endl;
		cout << lst.back() << endl;
	}

	for (auto it = lst.begin(); it != lst.end(); ++it){
		cout << *it << ' ';
	}
	cout << endl;


	return 0;
}
