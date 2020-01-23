#include <iostream>
//#include <cmath>

using namespace std;

int pow (int num_1, int num_2)
{
	int value = 1;

	do {
		value *= num_1;
	}while (--num_2);

	return value;
}

void square(int arr[3][3]) 
{
	int i;
	int j;

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
			cout << pow(arr[i][j], 2) << endl;

}

int main(void)
{
//	int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
	int arr[3][3];
	int i = 0;
	int j = 0;
	
	for (i = 0; i < 3 ; ++i)
		for (j = 0; j < 3 ; ++j)
			cin >> arr[i][j];

	square (arr);

	cout << "5^3 = " << pow(5, 3) << endl;
	return 0;
}
