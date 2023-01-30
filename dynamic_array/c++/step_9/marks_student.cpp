#include <iostream>
#include <vector>

int main(void)
{
	using namespace std;

	vector<char> marks[10] = {{3, 4}, {2}, {5, 5, 5}, {2, 2, 2, 2, 2},
		{1, 3}, {3}};

	//вывод повведеной информации
	for (int i = 0; i < 6; ++i){
		for (int j = 0; j < marks[i].size(); ++j){
			cout << int(marks[i][j])  << ' '; 
		}
		cout << endl;
	}

		return 0;
}
