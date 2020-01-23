#include <iostream>

using namespace std;

template <class sub> 

sub add (sub a, sub b) {

	return a+ b;
}

int main (void)
{
	cout << add<int> (10,20) << endl;
	cout << add<float> (13, 20.3) << endl;
	cout << add <float>(29.5, 12.4) << endl;
}


