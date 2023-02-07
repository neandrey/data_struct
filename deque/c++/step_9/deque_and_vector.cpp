#include <iostream>
#include <deque>
#include <vector>

using namespace std;

template <typename T>
void retrive_to_vector(const std::deque<T>& d, std::vector<T>& v, unsigned int max_size)
{
	for (auto it: d){
		if(!max_size)
			break;
		v.push_back(it);
		max_size--;
	}
}
//---------------------------------------------------------------------
int main(){

	deque<int> dq = {1, 0, 2, 3, 4, -5, 7, -11, 10, 8, 45, 3, 1024};
	vector<int> v;

	int max_size = 5;

	retrive_to_vector(dq, v, max_size);
	
	return 0;
}
//---------------------------------------------------------
