#include <iostream>
#include <list>

using namespace std;

int main(){
	
	list <short> lst;

	short x;
	while (!feof(stdin)){
		cin >> x;
		lst.push_back(x);
	}
	cout << endl;

	auto pos_it = lst.cbegin();

	for (int i = 0; i < lst.size(); ++i){
		if (i % 2 == 0){		
			cout << *pos_it << ' ';
		}
		++pos_it;
	}
	cout << endl;

	return 0;
}
