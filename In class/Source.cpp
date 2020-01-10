//Matthew Brown
//This is my own work
//In class excercise 1/8/2020


//#include <iostream>
//using namespace std;
//int main()
//{
	//float kilogram, pound;
	//cout << "Enter pound";
	//cin >> pound;
	//kilogram = pound * .454;
	//cout << pound << "pound=" << kilogram << "kg";
//		return 0;
//}

//In class 1/10/2020

//#include <iostream>
//using namespace std;
//int main()
//{
	//double side, area;
	//cout << "enter the side of hexagon" << endl;
	//cin >> side;
	//area = (3 * 1.732 * side * side) / 2;
	//cout << "Area of hexagon is: " << area << endl;
	//system("pause");
	//return 0;

//}


#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter first number:";
	cin >> num1;
	cout << "Enter second number:";
	cin >> num2;
	if (num1 > num2)
	{
		cout << "First number " << num1 << " is the largest";
	}
	else
	{
		cout << "Second number " << num2 << " is the largest";
	}
	return 0;
}

