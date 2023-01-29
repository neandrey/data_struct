#include <iostream>

using namespace std;

int main(){
	short digits[10] = {5, -4, 3, 10, 2, 7, 9, 2};
	int ins_pos, end_pos;
	ins_pos = end_pos = 2;

	//после числа 3 вставить подряд 101.
	for (int i = 10 - end_pos; i > ins_pos; --i){
		digits[i] = digits[i-1];
	}
	end_pos--;

	//после числа 3 вставить подряд 102.
	for (int i = 10 - end_pos; i > ins_pos; --i){
		digits[i] = digits[i-1];
	}

	digits[3] = 101;
	digits[4] = 102;

	//вывод на экран
	for (int i = 0; i < 10; ++i)
		cout << digits[i] << ' ';
	cout << endl;
	
	return 0;
}
