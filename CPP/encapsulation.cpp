#include <iostream>
using namespace std;

struct str {

	int a;
	int b;
	void add (int a, int b) {
		std::cout<< a+b<< endl;;
	}
};

int main (void)
{
	struct str s;
	cout << s.a << s.b << endl;
	s.add (4,5);
}

