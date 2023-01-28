#include <iostream>

using namespace std;

int main(){
	char marks[] = {5, 4, 2, 2, 2, 3};
	int len = sizeof(marks) / sizeof(char); //длина массива
	double m_avr = 0; 

	for (int i = 0; i < len; ++i)
	 m_avr += marks[i]; //sum marks

	m_avr /= len; 

	//вывод результата работы
	cout << m_avr << endl;

	return 0;
}
