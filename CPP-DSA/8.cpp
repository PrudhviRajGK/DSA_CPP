// while loops

/*
while (condition) {
    // body of the loop
}
*/

// factorial of a number using while loop
/*
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int factorial = 1;

    while (n>0) {
        factorial *=n;
        n--;
    }

    cout << "Factorial of 5 is: " << factorial << endl;

    return 0;
}
*/

// searching a target element

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 6;

    //using 'break' to exit loop as soon as target element is found
    for( int num : numbers) {
        if (num == target) {
            cout << "TARGET FOUND: " << target << endl;
            break; // EXIT THE LOOP IMMEDIATELY
        }
        else {
            cout << "Checking: " << num << endl;
        }
    }

    // USING CONTINUE TO SKIP SPECIFIC ELEMENTS
    // PRINTING ODD NUMBERS
    for (int num : numbers) {
        if (num % 2 == 0){
            continue; //SKIP EVEN NUMBERS
        }
        cout << "Odd number: " << num << endl;
    }

    return 0;
}