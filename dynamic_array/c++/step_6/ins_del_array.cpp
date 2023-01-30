#include <iostream>
#include <vector>

int main(void)
{
	using namespace std;

	vector<short> ar_sh;

	short x;
	while (!feof(stdin)) {
		cin >> x;
		ar_sh.push_back(x);
	}

	// здесь продолжайте программу
	// вставить элемент со значением 5 в третий по счету элемнт
	// и удалить 2 последних
	vector<short>::iterator it = ar_sh.begin();
	ar_sh.insert(it+2, 5);
	ar_sh.pop_back();
	ar_sh.pop_back();

	for (int i = 0; i < ar_sh.size(); ++i)
		cout << ar_sh[i] << ' ';
	cout << endl;

	return 0;
}
