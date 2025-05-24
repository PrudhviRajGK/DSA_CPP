// nester for loops
/*
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "i = " << i << ", j = " << j << endl;
            //nested loop code
        }
    }
    return 0;
}
    */

// conditional statements inside loops

//print even numbers

#include <iostream>
using namespace std;
/*
int main() {
for(int i=1; i<=10;i++){
    if(i%2 == 0){
        cout << i;
    }
    else
    {
        cout << " ";
    }
}
return 0;
}

*/

// code for table of 5
int main() {
    for(int i=0;i<=20;i+=5){
        cout << i << endl;
    }
    return 0;
}