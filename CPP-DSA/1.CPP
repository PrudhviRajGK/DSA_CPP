#include <iostream>
using namespace std;

int main()
{

cout << "gk prudhvi raj" << endl;
cout << "gk prudhvi raj" << "\n";
cout << "gk" << " prudhvi raj" << endl;
int age = 25;
cout << age << endl; // integer takes 4 bytes
char grade = 'A';
cout << grade << endl; // char takes 1 byte
float PI = 3.14F;
cout << PI << endl; // float takes 4 bytes
bool isPassed = true;
cout << isPassed << endl; // bool takes 1 byte
// true - 1, false - 0
double e = 2.718281828459045;
cout << e << endl; // double takes 8 bytes

//for typecasting

double price = 100.99;
int newPrice = (int)price; // typecasting double to int
cout << newPrice << endl; // prints 100

//for taking input from user
cout << "Enter your age: ";
cin >> age; // taking input from user
cout << "Your age is: " << age << endl; // prints the age entered by user

//operators
//arthmatic operators
int a = 5 , b = 10;
int sum = a + b;
cout << sum << endl; // prints 15
int diff = a - b;
cout << diff << endl; // prints -5
int prod = a * b;
cout << prod << endl; // prints 50
int div = a / b;
cout << div << endl; // prints 0
int mod = a % b;
cout << mod << endl; // prints 5

//relational operators
// < , >, <=, >=, ==, !=
cout << (2<5) << endl; // prints 1 (true)
cout << (2>5) << endl; // prints 0 (false)
cout << (2<=5) << endl; // prints 1 (true)
cout << (2>=5) << endl; // prints 0 (false)
cout << (2==5) << endl; // prints 0 (false)
cout << (2!=5) << endl; // prints 1 (true)

//logical operators
// &&, ||, !
cout << !(3<1) << endl; // prints 1 (true) !-> reverses the output
cout << (3<1 && 5>2) << endl; // prints 0 (false) && -> both conditions should be true
cout << (3<1 || 5>2) << endl; // prints 1 (true) || -> one condition should be true

// calculating the sum of two numbers
int num1 , num2;
cout << "Enter first number: ";
cin >> num1;

cout << "Enter second number: ";
cin >> num2;

sum = num1 + num2;

cout << sum << endl; // prints the sum of two numbers

// unary operators 
// increment (++) and decrement (--)
int x = 5;
int y = ++x; // pre increment
cout << y << endl; // prints 6
int z = x++; // post increment
cout << z << endl; // prints 6
cout << x << endl; // prints 7

// basic calculator 
int n1,n2;
char op;
cout << "Enter first number: ";
cin >> n1;
cout << "Enter second number: ";
cin >> n2;
cout << "Enter operator (+, -, *, /): ";
cin >> op;
if (op == '+')
{
    cout << n1 + n2 << endl; // prints the sum of two numbers
}
else if (op == '-')
{
    cout << n1 - n2 << endl; // prints the difference of two numbers
}
else if (op == '*')
{
    cout << n1 * n2 << endl; // prints the product of two numbers
}
else if (op == '/')
{
    cout << n1 / n2 << endl; // prints the quotient of two numbers
}
else
{
    cout << "Invalid operator" << endl; // prints invalid operator
}

return 0;

}