#include <iostream>
using namespace std;

int main()
{
int x;  // declaring variable
cout << "Enter your grade in percentage to receive it as a letter grade:";
cin >> x; //retrieving variable value 
if (x >= 86)
cout << "Your grade is an A";
else if (x >= 72)
cout << "Your grade is a B";   //Selecting different statments depending on the value of x
else if (x >= 60)
cout << "Your grade is a C";
else if (x >= 50)
cout << "Your grade is a D";
else 
cout << "You failed, your grade is an F"; //If the value of X does not meet the above values then declaring that they failed








}