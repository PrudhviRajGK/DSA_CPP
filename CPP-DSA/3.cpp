// Patterns
#include <iostream>
using namespace std;

//square pattern
int main() {
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << j;
        }
        cout << endl;
    }
/*
1234
1234
1234
1234
*/

cout<<endl;

// star pattern
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }

/*
****
****
****
****
*/

cout<<endl;

// char pattern
for(int i=1; i<=n; i++){
    char ch = 'A';
    for(int j=1; j<=n; j++){
        cout << ch;
        ch = ch + 1;
    }
    cout << endl;
}
/*
ABCD
ABCD
ABCD
ABCD
*/

cout<<endl;

// square pattern 2
n = 3;
int num = 1;
for(int i=0; i<n;i++){
    for(int j=0;j<n;j++){
        cout<<num;
        num++;
    }
    cout<<endl;
}
/*
123
456
789
*/

cout<<endl;

char ch = 'A';
for(int i=0; i<n;i++){
    for(int j=0;j<n;j++){
        cout<<ch;
        ch = ch + 1;
    }
    cout<<endl;
}
/*
ABC
DEF
GHI
*/

cout<<endl;

// Triangle Pattern
for(int i=0; i<n;i++) {
    for(int j=0; j<i+1; j++){
        cout << "*";
    }
    cout << endl;
}

/*
*
**
***
*/

cout<<endl;

for(int i=0;i<n; i++){
    for(int j=0; j<i+1; j++){
        cout << (i+1) << " ";
    }
    cout << endl;
}
/*
1
22
333
*/

cout<<endl;

ch = 'A';
for(int i=0;i<n; i++){
    for(int j=0; j<i+1; j++){
        
        cout << ch;
    }
    ch = ch + 1;
    cout << endl;
}
/*
A
BB
CCC
*/

cout << endl;

n = 3;
for(int i=0;i<n; i++){
    num =1;
    for(int j=0; j<i+1; j++){
        cout << num;
        num++;
    }
    cout << endl;
}
/*
1
12
123
*/
cout<< endl;
// Reverse Triangle Pattern
n = 3;
for(int i=0;i<n; i++){
    num =1;
    for(int j=i+1; j>0; j--){
        cout << j;
    }
    cout << endl;
}
/*
1
21
321
*/
cout << endl;
// Floyd's Triangle Pattern
/*
1
2 3
4 5 6
7 8 9 10
*/
num = 1;
for(int i=0; i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<num;
        num++;
    }
    cout << endl;
}

cout << endl;

//Floyds reverse triangle pattern

num = 1;
for(int i=0; i<n;i++){
    for(int j=i+1;j>0;j--){
        cout<<j;
    }
    cout << endl;
}

cout << endl;

// Floyds triangle Charector version

ch = 'A';
for(int i=0; i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<ch;
        ch++;
    }
    cout << endl;
}

cout << endl;

// Floyds reverse triangle Charector version

ch = 'A';
for (int i = 0; i < n; i++) {
    for (int j = i; j >= 0; j--) {
        cout << (char)(ch + j);
    }
    cout << endl;
}

// Inverted Triangle Pattern
/*
1111
 222
  33
   4
*/

n = 3;
num = 1;
for(int i=0; i<n; i++){
    //spaces
    for(int j=0; j<i; j++){
        cout << " ";
    }
    //nums
    for(int j =0; j<n-i;j++){
        cout << (i+1);
    }
    cout << endl;
}

//pyramid pattern
n = 4;
for(int i=0; i<n; i++){
  //spaces : n - i - 
    

  //nums1


  //nums2
}

    return 0;
}