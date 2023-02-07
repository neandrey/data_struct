#include <iostream>
#include <stack>

using namespace std;
int main(){

	stack<int> st;
	int x;

	while(!feof(stdin)){
		cin >> x;
		st.push(x);
	}

	while(!st.empty()){
		cout << st.top() << ' ';
		st.pop();
	}

	cout << endl;
	return 0;
}
