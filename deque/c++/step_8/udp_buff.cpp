#include <iostream>
#include <deque>
#include <string.h>
#include <vector>

using namespace std;

typedef struct {
	unsigned int num;	// порядковый номер пакета
	char data[20];		// данные пакета (20 байт)
} PACKAGE;

int main(){

	deque<PACKAGE> buff;
	int x;
	char s[20];
	PACKAGE p;

	 while (!feof(stdin)) {
        cin >> x;
        fgetc(stdin);
        fgets(s, sizeof(s), stdin);
        for (int i = 0; i < sizeof(s); ++i)
            if (s[i] == '\n' || s[i] == '\r') s[i] = '\0';

        p.num = x;
        strcpy(p.data, s);
        buff.push_front(p);
    }

	vector<PACKAGE> v_data(buff.size());
	char data_str[100];
	
	//извлекаем пакеты
	//и помещаем в дин. массив
	while(buff.size()){
		p = buff.back();
		v_data[p.num-1] = p;
		buff.pop_back();
	}


	for (auto it : v_data){
		strncat(data_str, it.data, 9);
	}

	cout << data_str;

		return 0;
}
//---------------------------------------------------------
