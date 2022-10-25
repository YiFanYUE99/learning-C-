#include <iostream>
using namespace std;
//Á·Ï°
int main()
{
	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;
	cout << "pig1's weight" << endl;
	cin >> pig1;
	cout << "pig2's weight" << endl;
	cin >> pig2;
	cout << "pig3's weight" << endl;
	cin >> pig3;

	if (pig1 >= pig2)
	{
		if (pig1 >= pig3)
		{
			cout << "pig1 is the fattest" << endl;
		}
		else
		{
			cout << "pig3 is the fattest" << endl;
		}
	}
	else
	{
		if (pig3 >= pig2)
		{
			cout << "pig3 is the fattest" << endl;
		}
		else
		{
			cout << "pig2 is the fattest" << endl;
		}
	}
	system("pause");

	return 0;
}