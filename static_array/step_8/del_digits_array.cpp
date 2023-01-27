#include <iostream>

using namespace std;

int main(){
	short digits[] = {5, -4, 3, 10, 2, 7, 9, 2};
	int del_pos = 2;
	int length = sizeof(digits) / sizeof(short);

	//{5, -4, 10, 2, 7, 9, x} -> x - любое число.
	//можно оставить прежнее 2.(так и сделаем).
	for (int i = del_pos; i < length-1; ++i)
		digits[i] = digits[i+1];

	//вывод на экран
	for (int i = 0; i < length; ++i)
		cout << digits[i] << ' ';
	cout << endl;
	
	return 0;
}
