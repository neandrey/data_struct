#include <iostream>
#include <deque>

using namespace std;

typedef struct{
	short x, y;
} POINT;

void add_point(deque<POINT>*, short, short);

int main(){

	deque<POINT> path;

	add_point(&path, 0, 0);
	add_point(&path, 10, 20);
	add_point(&path, 10, 30);
	add_point(&path, 15, 30);
	add_point(&path, 20, 20);

	for(auto i = 0; i < 2; ++i)
		path.pop_front();

	/*
	for (auto it : path)
		cout << it.x << ' ' << it.y << endl;
	cout << endl;
	*/

	return 0;
}
//---------------------------------------------------------
void add_point(deque<POINT> *path, short x, short y){
	path->push_back(POINT{x, y});
}

