#include <iostream>
#include <list>

using namespace std;

typedef struct {
	char model[50];
	short year;
	int distance;
	short power;
} AUTO;

//-------------------------------------------------------------
void filter_auto(const list<AUTO>& autos, list<AUTO> *results){
	int i = 0;	
	for (auto it = autos.begin(); it != autos.end(); ++it){
		if((*it).year < 2014){
			results[i].push_back(*it);
			i++;
		}
	}
}
//---------------------------------------------------------------
int main(){
	
	list<AUTO> autos;

	autos.push_back(AUTO{"порше", 2005, 200430, 143});
	autos.push_back(AUTO{"тойота", 2011, 80754, 124});
	autos.push_back(AUTO{"опель", 2017, 75730, 147});
	autos.push_back(AUTO{"бмв", 2015, 100450, 230});
	autos.push_back(AUTO{"мерседес", 2004, 245034, 156});

	list<AUTO> *results = new list<AUTO>[autos.size()];

	filter_auto(autos, results); 

	for (int i = 0; i < autos.size(); ++i){
		for (auto it = results[i].cbegin(); it != results[i].cend(); ++it){
			cout << (*it).model << ' ';
		}
	}	
	cout << endl;

	delete[] results;

	return 0;
}
//--------------------------------------------------------------
