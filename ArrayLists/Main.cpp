#include <iostream>
#include <string>
#include <vector>
//#include <sstream>

using namespace std;
//Creating an ArrayList of 5 groceries

void printVector(vector<string> v)
{
	for (unsigned int i = 0; (i < v.size()); i++)
	{
		cout << i + 1 << ". " << v[i] << endl;
	}
	cout << endl;
}

int main()
{
	//Solution 1, a fixed list of groceries
	string groceriesList01[5] = { "Milk", "Bread", "Cheese", "Chocolate", "Coffee" };
	cout << "Groceries List (Fixed Array): " << endl;
	for (unsigned int i = 0; (i <= groceriesList01->size()); i++)
	{
		cout << groceriesList01[i] << endl;
	}

	cout << endl;

	//Solution 2, a expandable list of groceries
	string item;
	int items = 5;
	string command;
	bool finished = false;
	typedef vector<string>;
	vector<string> groceriesList02;

	groceriesList02.push_back("Milk");
	groceriesList02.push_back("Bread");
	groceriesList02.push_back("Cheese");
	groceriesList02.push_back("Cheese");
	groceriesList02.push_back("Chocolate");
	groceriesList02.push_back("Chocolate");
	groceriesList02.push_back("Coffee");
	groceriesList02.push_back("Coffee");

	cout << "Groceries List (Vector) (Items: " << groceriesList02.size() << "):" << endl;
	printVector(groceriesList02);
	/*
	for (int i = 0; (i < groceriesList02.size()); i++)
	{
		cout << i+1 << "." << groceriesList02[i] << endl;
	}*/

	/*for(int i=0; (i < items); i++)
	{
		cout << "\nEnter new Item:" << endl;
		cin >> item;
		cout << endl;
		groceriesList02.push_back(item);
		cout << "Updated List (Items: " << groceriesList02.size() << "):" << endl;
		for (int i = 0; (i < groceriesList02.size()); i++)
		{
			cout << i+1 << "." << groceriesList02[i] << endl;
		}
	}*/
	
	while (finished == false)
	{
		cout << "\nEnter new Item:" << endl;
		cin >> item;
		//getline(cin, item);
		cout << endl;
		groceriesList02.push_back(item);
		cout << "Updated List (Items: " << groceriesList02.size() << "):" << endl;
		printVector(groceriesList02);
		/*
		for (int i = 0; (i < groceriesList02.size()); i++)
		{
			cout << i + 1 << ". " << groceriesList02[i] << endl;
		}*/
		cout << "Continue? (y / n)" << endl;
		
		cin >> command;
		if (command == "n" || command == "N")
		{
			finished = true;
		}
	}

	cout << "Completed List (Items: " << groceriesList02.size() << "):" << endl;
	printVector(groceriesList02);
	/*
	for (int i = 0; (i < groceriesList02.size()); i++)
	{
		cout << i + 1 << ". " << groceriesList02[i] << endl;
	}

	cout << endl;*/
	//cin.get();

	system("pause");
	return 0;
}