#include <iostream>

/*
 * Here we acquiring properties of base calss from derived class so that we 
   are using inheritance concept to acquire the properties.
 * In the construcor will also include at that default values or below 
   declarations it won't throw any error.
*/

using namespace std;

class base {
	public:
	int num1;
	int num2;
	public:
		base (int var1 = 0,  int var2 = 0) {

			num1 = var1;
			num2 = var2;
		}
		void add (void) {

			cout << "addition " << num1 +num2 << endl;
		}
};

class derived : public base {

	int num3;
	public:
	//	derived (int var3) : base(0,0){
		derived (int var3){

			num3 = var3;
		}
		void add (void) {

			cout <<"Derived class addition "<< num1 +num2 + num3 <<endl;
		}
};

int main (void)
{
	base b(10, 20);
	derived d(30);
	b.add ();
	d.add ();
}


