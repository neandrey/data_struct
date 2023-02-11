#include <iostream>
#include <deque>

using namespace std;
int main(){

	deque<int> dq = {1, 2, 3};
	
	for (auto it = dq.cbegin(); it != dq.cend(); ++it)
		cout << *it << ' ';
	cout << endl;

	return 0;
}
