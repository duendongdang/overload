#include <iostream>
#include <string>
#include <iomanip>
void DisplayMenu():
float Area(const float Radius);
float Area(const float Length, const float Widht);
double Area(const double Based, const double High);

int main()
{
	char Choice;
	bool Flag = true;
	do{
	   DisplayMenu();
	   cin >> Choice;
	   if(Choice == '1'){
		 cout << "\nEnter radius : ";
		 cin >> Radius;
		 cout << "Area of Circle = " << fixed;
		 cout << setorecision(2) << Area(radius);
		 cout << endl;
	   }
	   else if(Choice == '2'){
		 float Length,Widht;
		 cout << "\nEnter Length and Widht : ";
		 cin >> Length >> Widht ;
		 cout << "Area of Rectangle = " << fixed;
		 cout << setorecision(2) << Area(Lenght,Widht);
		 cout << endl;
	   }
	   else if(Choice == '3'){
		double Based,High;
		 cout << "\nEnter Based and High : ";
		 cin >> Based >> High ;
		 cout << "Area of Triangle = " << fixed;
		 cout << setorecision(2) << Area(Based , High);
		 cout << endl;
	   }
	   else if(Choice == '4') Flag = false;
	   else {
		   cout << "\nYou choose out of rangr is ";
		   cout << "not process.\n";
	   }
	 }while(Flag);
	cout << "\n . . .Exit Program . . .\n";
	return(0);
}

float Area(const float Radius);
{
	return(3.14159F * Radius * Radius);
}

float Area(const float Length, const float Widht);
{
	return(Length * Widht);
}
double Area(const double Based, const double High);
{
	return(0.5 * Based * High);
}
void DisplayMenu()
{
	cout << endl;
	cout << " Program Calculate Area " << endl;
	cout <<  " 1. Circle "<< endl;
	cout <<  " 2. Rectangle "<< endl;
	cout <<  " 3. Triangle "<< endl;
	cout <<  " 4. Exit "<< endl;
	cout << "Enter your choose number : ";
	cout <<  " 1. Circle "<< endl;

}
