#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

	map<short, vector<short>> graph;

	vector<short> v1 = {2, 3, 4};
	vector<short> v2 = {1, 3};
	vector<short> v3 = {1, 2, 5, 6};
	vector<short> v4 = {1, 6};
	vector<short> v5 = {3, 6};
	vector<short> v6 = {3, 4, 5};

	graph.emplace(1, v1);
	graph.emplace(2, v2);
	graph.emplace(3, v3);
	graph.emplace(4, v4);
	graph.emplace(5, v5);
	graph.emplace(6, v6);

	return 0;
}
