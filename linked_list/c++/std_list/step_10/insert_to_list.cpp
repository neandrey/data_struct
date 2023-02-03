#include <iostream>
#include <vector>
#include <list>

using namespace std;
//--------------------------------------------------------------
template <typename T>
void insert_to_list(list<T>& lst, unsigned int pos, const T& value){
	if(pos-1 < lst.size()){
		auto pos_it = lst.cbegin();
		for(int i = 0; i < pos-1; ++i, ++pos_it);
		lst.insert(pos_it, value);
	}
}
//---------------------------------------------------------------
int main(){

	list<int> d_lst;

	int x;
	vector<int> d_in;   // этот объект в программе не менять
	while (!feof(stdin)) {
		cin >> x;
		d_in.push_back(x);
	}

	for (auto it = d_in.cbegin(); it != d_in.cend(); ++it)
		d_lst.push_back(*it);
	cout << endl;

	insert_to_list(d_lst, 2, -3);
	insert_to_list(d_lst, 3, -5);

	for (auto it = d_lst.cbegin(); it != d_lst.cend(); ++it)
		cout << *it << ' ';
	cout << endl;

	return 0;
}
//--------------------------------------------------------------
