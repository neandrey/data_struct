#include <iostream>

using namespace std;

int main(){
	int v1[4] = {2, -1, 4, 3};
	int v2[4] = {5, 4, 7, -1};
	int v_res = 0;

	for (int i = 0; i < 4; ++i)
	 v_res += v1[i] * v2[i]; 

	//вывод результата работы
	cout << v_res << endl;

	return 0;
}
