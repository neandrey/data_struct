#include <iostream>
#include <deque>

using namespace std;
int main(){

	deque<int> dq;

	int x;
	while (!feof(stdin)) {
		cin >> x;
		dq.push_back(x);
	}

	if (dq.size() >= 2){
		for(int i = 0; i < 2; ++i){
			cout << dq.front() << ' ';
			dq.pop_front();
		}
	}
	cout << endl;

	return 0;
}
