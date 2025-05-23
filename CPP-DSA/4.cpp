// #include<iostream> -----> is Used for input output operations


// the skeleton of cpp

/*
#include<iostream>
int main(){
//my code
return 0;
}
*/

// output with cpp
/*
#include<iostream>
int main() {
    std::cout << "GK IT IS!!";
    return 0;
}
*/

// to print GK IT IS in twice
/*
#include<iostream>
int main() {
    std::cout << "GK";
    std::cout << "IT IS";
    return 0;
}
*/

// \n is a newline charector ...... GK IT IS IN TWO DIFFERENT LINES
/*
#include <iostream>
int main() {
    std::cout << "GK" << "\n";
    std::cout << "IT IS!!";
    return 0;
}
*/

// USING NAMESPACE STD
// u basically tell the compiler that u r using all names from std without needing to specify it each time
/*
#include<iostream>
using namespace std;
int main(){
    cout << "gk" << "\n";
}
*/

// taking user input from cin
/*
#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    cout << "Value of x: " << x;
    return 0;
}
*/

// multiple inputs
/*
#include<iostream>
using namespace std;
int main() {
    int x;
    int y;
    cin >> x >> y;
    cout << "Value of x:" << x << " and y:" << y;
    return 0;
}
*/

// **** shortcut to include all standard libraries at once ***** #include<bits/stdc++.h> ****

#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y;
    cout << "value of x:" << x << " and y : " << y;
    return 0;
}