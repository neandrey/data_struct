#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(){

  vector<int>t_data = {76, 32, -44, 20, 16, 984, -100, 304, 2, 0, 1};	
	list<int> lst;
	
	for (auto it : t_data)
		lst.push_front(it);

	for (int i = 0; i < 5; ++i){
		cout << lst.back() << ' ';
		lst.pop_back();
	}
	cout << endl;

	return 0;
}
