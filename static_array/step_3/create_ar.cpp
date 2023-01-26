#include <iostream>

using namespace std;

int main(){
	const int N = 15;
	int ar[N];

	for (int i = 0; i < N; ++i)
		ar[i] = -1;

	//так как счет начинается с одного -> 0, 1, 2, 3, 4 
	ar[4] = 100;

	//выведем первых 5 элементов
	for (int i = 1; i < 6; ++i)
		cout << '(' <<  i << ' ' << ar[i-1] << ") ";

	cout << endl;

	return 0;
}
