#include <iostream>

using namespace std;

int a = 107;

int main(void)
{
	int a = 108;

	char _ = 'a';
	char __ = 'b';
	char ___ = 'c';
	char ____ = 'd';

	cout << ::a << '\n'<< a << endl;
	cout << _ << __ << ___ << ____ << endl;

}
