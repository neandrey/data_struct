#include <iostream>

using namespace std;

int main(){
	const int N = 7;
	char ar[N] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	int input_number = 2;

	//необходимо сдвинуть массив
	for (int i = N-1; i > input_number; --i)
		ar[i] = ar[i-1];	

	ar[input_number] = '#';

	//выводим результат сдвига.
	for (int i = 0; i < N; ++i)
		cout << ar[i] << ' ';

	

	cout << endl;

	return 0;
}
