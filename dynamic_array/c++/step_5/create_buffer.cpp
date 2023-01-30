#include <iostream>
#include <vector>

int main(void)
{
	using namespace std;
	vector<char> buffer;
	buffer.reserve(512);
	char data[] = "methods: size; push_back;";

	for (int i = 0; i < 25; ++i)
	 buffer.push_back(data[i]);

	// здесь продолжайте программу
	// выводим 1-число данных, 2-физический размер
	cout << buffer.size() << ' ' << buffer.capacity();
	cout << endl;

	return 0;
}
