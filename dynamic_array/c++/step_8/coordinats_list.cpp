#include <iostream>
#include <vector>

typedef struct{
	int x, y;
}POINT;


int main(void)
{
	using namespace std;

	vector<POINT> path = {{0, 0}, {20, -5}, {30, 10}, {100, 0}, {175, 80}};

	for (int i = 0; i < path.size(); ++i)
		cout << path[i].x << ' ';
	cout << endl;

	for (int i = 0; i < path.size(); ++i)
		cout << path[i].y << ' ';
	cout << endl;

		return 0;
}
