#include <iostream>
#include <string>

using namespace std;
//Creating an ArrayList of 5 groceries

int main()
{
	//Solution 1, a fixed list of groceries
	string groceriesList01[5] = { "Milk", "Bread", "Cheese", "Chocolate", "Coffee" };
	cout << "Groceries List (Fixed Array): " << endl;
	for (int i = 0; (i < 5); i++)
	{
		cout << groceriesList01[i] << endl;
	}

	cout << endl;

	cin.get();

	return 0;
}