// conditional statements

// if else
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
int age = 10;

if(age >=18){
    cout << "You are an adult." << "\n";
}
else {
    cout << "You are not an adult" << endl;
}
}
*/

#include <iostream>
int main(){
    int marks = 55;
    char grade;

    if (marks < 25){
        grade = 'f';
    } else if ( marks <= 44) {
        grade = 'e';
    } else if ( marks <= 49) {
        grade = 'd';
    } else if ( marks <= 59) {
        grade = 'c';
    } else if ( marks <= 69) {
        grade = 'b';
    }else if ( marks >= 70) {
        grade = 'a';
    }else {
        grade = 'x';
    }

    std::cout << " Grade: " << grade << "\n";

    return 0;
}