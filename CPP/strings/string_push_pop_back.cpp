#include <iostream>

using namespace std;

int main (void)
{
	string name;

	cin >> name;
//	getline(cin, name);

	cout << name << endl;

	name.push_back('V');

	cout << name << endl;

//	name.pop_back();

//	cout << name << endl;


	return 0;
}
