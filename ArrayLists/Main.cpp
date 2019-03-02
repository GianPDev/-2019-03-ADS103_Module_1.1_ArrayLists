#include <iostream>
#include <string>
#include <vector>
//#include <sstream>

using namespace std;
//Creating an ArrayList of 5 groceries

void printVector(vector<string> v)
{

	//gets vector length and iterates length amount of times
	for (unsigned int i = 0; (i < v.size()); i++)
	{
		//adds item number with . then adds item name via index of item
		cout << i << ". " << v[i] << endl;
	}
	cout << endl;
}

//No longer used, only temporarily changes vector?
/*
static void removeElementByIndex(vector<string> vector, unsigned int index)
{
	cout << "Enter Index Number to Remove: " << endl;
	
	if (index > -1 || index < vector.size())
	{
		vector.erase(vector.begin()+index); //Deletes value at index
		vector.shrink_to_fit(); //Moves values' indexes to fill in gaps
		cout << "Updated List (Items: " << vector.size() << "):" << endl;
		printVector(vector);
	}

	else
	{
		cout << index << " is an invalid Number, try again:" << endl;
	}
}
*/

int main()
{
	//Solution 1, a fixed list of groceries
	//creates a fixed string array of 5 and initiating it with string values
	string groceriesList01[5] = { "Milk", "Bread", "Cheese", "Chocolate", "Coffee" };
	cout << "Groceries List (Fixed String Array): " << endl;
	//gets string array size for iterating over all array values
	//using unsigned int because array->size returns unsigned int
	for (unsigned int i = 0; (i <= groceriesList01->size()); i++)
	{
		cout << groceriesList01[i] << endl;
	}

	cout << endl;

	//Solution 2, a expandable list of groceries

	string item; //To enter new items
	string command; //To determine whether or not to continue adding items
	unsigned int remove;
	bool finished = false; //to finish or keep while loop going
	vector<string> groceriesList02;

	//Manually adding strings to vector
	groceriesList02.push_back("Milk");
	groceriesList02.push_back("Bread");
	groceriesList02.push_back("Cheese");
	groceriesList02.push_back("Cheese");
	groceriesList02.push_back("Chocolate");
	groceriesList02.push_back("Chocolate");
	groceriesList02.push_back("Coffee");
	groceriesList02.push_back("Coffee");

	cout << "Groceries List (String Vector) (Items: " << groceriesList02.size() << "):" << endl;
	printVector(groceriesList02);
	
	//While loop used to indefinitely add items until user inputs n to end it
	while (finished == false)
	{
		cout << "Add, Remove or Exit ((a)dd / (r)emove / (e)xit):" << endl;
		cin >> command;
		if (command == "e" || command == "E")
		{
			finished = true;
		}
		else if (command == "r" || command == "R")
		{
			cout << "Enter Index Number to Remove: " << endl;
			cin >> remove;
			cout << "Enter Index Number to Remove: " << endl;

			if (remove > -1 || remove < groceriesList02.size())
			{
				groceriesList02.erase(groceriesList02.begin() + remove); //Deletes value at index
				groceriesList02.shrink_to_fit(); //Moves values' indexes to fill in gaps
				cout << "Updated List (Items: " << groceriesList02.size() << "):" << endl;
				printVector(groceriesList02);
			}

			else
			{
				cout << remove << " is an invalid Number, try again:" << endl;
			}
		}
		else if (command == "a" || command == "A")
		{
			cout << "\nEnter new Item:" << endl;
			cin >> item; //User inputs item to add to vector
			cout << endl;
			groceriesList02.push_back(item);

			cout << "Updated List (Items: " << groceriesList02.size() << "):" << endl;
			printVector(groceriesList02);
		}
	}

	cout << endl;
	cout << "Completed List (Items: " << groceriesList02.size() << "):" << endl;
	printVector(groceriesList02);

	system("pause"); //adds "Press any key to continue. . ."

	return 0;
}