// conditional statements
#include <iostream>
using namespace std;
//if else 
int main()
{
    int n = -100;
    if (n >0)
    { 
        cout << "positive number" << endl;
    }
    else 
    {
        cout << "negative number" << endl;
    }


// age is greater than 18 -> eligible to vote
// age is less than 18 -> not eligible to vote
int age;
cout << "enter your age:";
cin >> age;
if (age >= 18)
{
    cout << "yes you are eligible to vote" << endl;
}
else 
{
    cout << "no you are not eligible to vote try again next time" << endl;
}

// checking if an number is even or odd
int num;
cout << "enter a number:";
cin >> num;
if (num % 2 == 0) {
    cout << "even\n";
} 
else {
    cout << "odd\n";
}

//else if
int marks;
cout << "enter your marks" << endl;
cin >> marks;
if ( marks >= 90) {
    cout << "A";
}
else if( marks >= 80 && marks < 90) {
    cout << "B";
}
else {
    cout << "C";
}

//find if charector is lowercae or uppercase
char ch;
cout << "enter charector";
cin >> ch;
if(ch >= 'a' && ch <= 'z') {
    cout << "lowercase\n";
}
else {
    cout << "uppercase\n"
}

//using ASCII to find if charector is lowercae or uppercase
char chh;
cout <<  "enter charector";
cin >> ch;
if(ch >=65 && ch <=90){
    cout << "lowercase\n";
}
else {
    cout << "uppercase\n"
}

// Ternary Statement
// condition ? stt1 : strr2;
int number = 20;
cout << (n>=0 ? "positive" : "negative") << endl;

//LOOPS
// while loop
// printing numbers 1 to 5
// while (condition)
int count = 0;
while ( count < 10){
    cout << count << endl;
    count++;
}

// for loop
// for ( initialisation; condition; updation){}
int numm = 10;

for(int i = 1; i<=n; i++){
    cout << i << endl;
}

// calculate sum of numbers from 1 to n
int sum = 0;
for(i=1; i<=n; i++){
    sum += i;
}
cout << sum << endl;

// thru while loop
while (i <= n){
    sum += i;
    i++
}
cout << sum << endl;

// break --> helps exit loop
for(i=1; i<=n; i++){
    sum += i;
    if(i == 5) {
        break;
    }
}
cout << sum << endl;

// sum of all odd numbers from 1 to N
int oddSum = 0
for (i=1; i<=n;i++){
    if(i%2 !=0) {
        oddSum += i;
    }
}
cout << oddSum << endl;

// sum of all even numbers from 1 to N
int evenSum = 0
for (i=1; i<=n;i++){
    if(i%2 ==0) {
        evenSum += i;
    }
}
cout << evenSum << endl;

// do while loop
// do { }while(condition)
do {
    cout << "hello world\n";
} while( 3>5)

// check if a number is prime or not
// 2 to n -1 
int nos = 7;
bool isPrime = true;
for(int i=2; i<=n-1; i++) {
    if(n%i == 0) { //non prime
        isPrime = false;
        break;
    }
}

if(isPrime == true) {
    cout << "prime no\n"
}
else {
    cout << "non prime no"
}

// better approch root n to root n
int nos = 7;
bool isPrime = true;
for(int i=2; i*i<=n; i++) {
    if(n%i == 0) { //non prime
        isPrime = false;
        break;
    }
}

if(isPrime == true) {
    cout << "prime no\n"
}
else {
    cout << "non prime no"
}

//Nested Loops
for(int i=1; i<=5; i++){
    cout << "*****" << endl;
}

// x number of starts in 1 line

int x = 10;
for(int i=1; i<=x; i++) {
    cout << "*";
}
cout << endl;

// nested loop pattern.....
int n = 10;
for(int i=1; i<=n;i++){
    int m =5;
    for(int j = 1; j<=m;j++){
        cout << "*"
    }
    cout << endl;
}

return 0;

}






