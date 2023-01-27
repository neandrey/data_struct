#include <iostream>

using namespace std;

int main(){
	const int N = 17;
	int func[N];
	int x = 4;

	for (int i = 0; i < N; ++i){
		func[i] = 2 * x - 5; 
		x++;
	}

	//вывод на экран получившехся значений.
	for (int i = 0; i < N; ++i){
		cout << func[i] << ' ';
	}
	cout << endl;
	
	return 0;
}
