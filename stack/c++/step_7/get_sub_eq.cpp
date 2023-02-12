#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void get_sub_eq(const string& eq_str, vector<string>& res) 
{
	stack<int> st;
	int i = 0;
		for (auto it : eq_str){
			if(it == '(')
				{
					st.push(i+1);
				}
			if(it == ')'){
				res.push_back(eq_str.substr(st.top(), i-st.top()));
				st.pop();
			}
			++i;
		}
}
//-----------------------------------------
int main(void)
{
	string eq_str = "2 + 3 * (1 - 5 - (3 * x - 5)) + (a - b)";
	//string eq_str = "(a(b))";
	vector<string> res;

	get_sub_eq(eq_str, res);

    return 0;
}
