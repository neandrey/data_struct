#include <iostream>

using namespace std;

int main(){
	int ar[] = {5, 6, 2, -1, 9, 4};
	
	int bytes_ar = sizeof(ar);

	int size_ar = sizeof(ar) / sizeof(int);

	cout << bytes_ar << endl;
	cout << size_ar << endl;

	return 0;
}
