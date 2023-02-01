#include <iostream>
#include <vector>
#include <list>

using namespace std;
//объявление функции
void copy_to_array(vector<unsigned int>&, const list<unsigned int>&);

int main(){
	
	list<unsigned int> lst = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23};
	vector<unsigned int> ar_d;

	copy_to_array(ar_d, lst);

	for (auto it = ar_d.cbegin(); it != ar_d.cend(); ++it)
	 cout << *it << ' ';	

	cout << endl;

	return 0;
}
//--------------------------------------------------
//Реализация функции
void copy_to_array(vector<unsigned int>& dest, const list<unsigned int>& src){

	for (auto it = src.cbegin(); it != src.cend(); ++it)
		dest.push_back(*it);
}
//--------------------------------------------------
