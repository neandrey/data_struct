#include <iostream>
#include <cmath>


using namespace std;

int main(){
	int vector3D[3] = {15, 4, -5};
	int norm2 = 0;

	for (int i = 0; i < 3; ++i)
	 norm2 += pow(vector3D[i], 2);

	cout << norm2 << endl;

	return 0;
}	
