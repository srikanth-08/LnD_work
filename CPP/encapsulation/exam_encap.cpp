#include <iostream>
#pragma pack(1)

using namespace std;

class encapsul {

	private :

		int num;
		char ch;
	public :
		encapsul (int var1, char var2) {
			num = var1;
			ch = var2;
		}
		int getNum() const {
			return num;
		}
		char getCh() const {
			return ch;
		}

		void setNum(int num1) {
			num = num1;
		}
		void setCh(char ch1) {
			ch = ch1;
		}
};

int main(void)
{
	encapsul obj(10, 's');

	//obj.setNum(100);
	//obj.setCh('S');

	cout << obj.getNum() << endl;
	cout << obj.getCh() << endl;
	cout << sizeof(obj) << endl;

//	cout << obj.num << endl;
//	cout << obj.ch << endl;
	return 0;
}
