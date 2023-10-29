#include <iostream>
using std::cout;
using std::endl;
using std::string;


string make_plural(int quanity, string str, string ending)
{
	return (quanity > 1) ? str + ending : str;
}

string def_ending = "s";
string make_plural(int quanity, string str, string ending = def_ending);

int main()
{
	string suc = "success";
	string fai = "failure";
	cout << make_plural(1, suc) << endl;
	cout << make_plural(2, suc, "es") << endl;
	cout << make_plural(1, fai) << endl;
	cout << make_plural(2, fai) << endl;
}