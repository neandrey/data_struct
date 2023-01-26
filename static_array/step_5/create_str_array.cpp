#include <iostream>

using namespace std;

int main(){
	char str_1[] = "Structures data";
	char str_2[20];

	for (int i = 0; i < 20; ++i)
		str_2[i] = str_1[i];

	//вывод получившейся массив
	cout << str_2 <<  endl;

	return 0;
}
