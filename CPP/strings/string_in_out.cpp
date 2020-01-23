#include <iostream>

using namespace std;

int main (void)
{
	char string[20];

//	cin >> string;
	cin.get(string, 19);

	cout << string << endl;;

	return 0;
}
