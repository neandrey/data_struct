#include <iostream>
#include <deque>

using namespace std;

typedef struct{
	char name[100];
	double price;
	unsigned int weight;
} THING;

int main(){

	deque<THING> goods;

	goods.push_front(THING{"конфеты", 320.0, 400});
	goods.push_front(THING{"книга", 1024.78, 1000});
	goods.push_front(THING{"кофе", 512.64, 300});
	goods.push_front(THING{"сумка", 2048.0, 400});
	goods.push_front(THING{"кофта", 1048.24, 1204});

	for (auto it = goods.cbegin(); it != goods.cend(); ++it)
		if((*it).weight < 700)
			cout << (*it).name << ' ';
	cout << endl;

	for (auto it : goods)
		cout << it.name << ' ' << it.price << ' ' <<  it.weight << endl;
 
	goods.clear();

	goods.push_back(THING{"конфеты", 320.0, 400});
	goods.push_back(THING{"книга", 1024.78, 1000});
	goods.push_back(THING{"кофе", 512.64, 300});
	goods.push_back(THING{"сумка", 2048.0, 400});
	goods.push_back(THING{"кофта", 1048.24, 1204});


	for (auto it = goods.rbegin(); it != goods.rend(); ++it){
		if((*it).weight < 700)
			cout << (*it).name << ' ';
	}
	cout << endl;

	for (auto it : goods)
		cout << it.name << ' ' << it.price << ' ' <<  it.weight << endl;

	return 0;
}
//---------------------------------------------------------

