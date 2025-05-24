// switch case statements

//given number from 1 to 7, print the corresponding day of the week.
/*
#include <iostream>
using namespace std;
int main() {
    int day = 4;

    switch (day) {
        case 1:
            cout << "MONDAY";
            break;
        case 2:
            cout << "TUESDAY";
            break;
        case 3:
            cout << "WEDNESDAY";
            break;
        case 4:
            cout << "THURSDAY";
            break;
        case 5:
            cout << "FRIDAY";
            break;
        default:
            cout << "Invalid";
    }
    return 0;
}
*/
/*
// EXAMPLE 2
#include <iostream>
using namespace std;

int main() {
    const int x = 10;
    const int y = 5;

    switch (x+y) {
        case 15:
            cout << "Result is 15" << endl;
            break;
        case 20:
            cout << "Result is 20" << endl;
            break;
        default:
            cout << "no match found" << endl;
    }

    return 0;
}
*/

// switch statement are made are specifuically designed to handel integer and charactor values.


#include <iostream>
using namespace std;

int main() {
    char grade = 'B';

    switch(grade) {
        case 'A':
            cout << "Excellet!" << endl;
            break;
        case 'B':
            cout << "GOOD!!" << endl;
            break;
        default:
            cout << "NOT SPECIFIED" << endl;
    }
    return 0;
}
