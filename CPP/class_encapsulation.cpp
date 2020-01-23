#include <iostream>
using namespace std;

class str {
protected:
	int a;
	int b;
	friend int main(void);
	void add (int a, int b) {
		std::cout<< a+b<< endl;;
	}
}s;

int main (void)
{
	//str s;
	cout << s.a << s.b << endl;
	s.add (4,5);
}


