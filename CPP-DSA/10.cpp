// pattern printing
#include<iostream>
using namespace std;
/*
*****
*****
*****
*****
*****
*/

/*
int main(){
int n;
cin >> n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    {
        cout<< "*";
    }
    cout << endl;

    }
    return 0;
}
*/

// coding ninjas similar question
/*
Problem statement
Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N-dimensional forest.

Example:
Input: ‘N’ = 3

Output: 
* * *
* * *
* * *

code -->
void nForest(int n) {
	// Write your code here.
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			cout << "*";
			if(j!=n-1){
			cout << " ";
			}
		}
		cout << endl;
	}
}

*/

// pattern 2: Right Angled Triangle Pattern
/*
*
**
***
****
*****
*/
/*
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
*/

//coding ninjas similar question
/*
problem statement and solution
Problem statement
Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

An N/2-dimensional forest is represented by the lower triangle of the pattern filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N/2-dimensional forest.

Example:
Input:  ‘N’ = 3

Output: 
* 
* *
* * *

solution:
void nForest(int n) {
	// Write your code here.
	for(int i = 0;i<n;i++){
		for(int j = 0;j<=i;j++){
			cout << "*";
			if(j!=n-1){
			cout << " ";
			}
		}
		cout << endl;
	}
}


*/


// now we need to print numbers in a pattern

/*
1
12
123
1234
12345
*/
/*
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n;i++){
        int num = 1;
        for(int j=0;j<=i;j++){
            cout << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}
*/

// similar coding ninja problem
/*
Problem statement
Sam is making a Triangular painting for a maths project.

An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers starting from 1.

For every value of ‘N’, help sam to print the corresponding N-dimensional Triangle.

Example:
Input: ‘N’ = 3

Output: 
1
1 2 
1 2 3

solution :
void nTriangle(int n) {
	// Write your code here
	for(int i = 0;i<n;i++){
		int num = 1;
		for(int j = 0;j<=i;j++){
			cout << num;
			num++;
			if(j!=n-1){
			cout << " ";
			}
		}
		cout << endl;
	}	
}
*/

// now new pattern is
/*
1
22
333
4444
55555
*/

// a quick thing to notice here is if i = 1 j =1 num = 1 , i = 2 , j = 2 , num = 2
/*
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n;i++){
        int num = i;
        for(int j=0;j<i;j++){
            cout << num;
        }
        num++;
        cout << endl;
    }
    return 0;
}
*/

// similar coding ninjas problem

/*
Problem statement
Sam is making a Triangular painting for a maths project.

An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers representing the row number.

For every value of ‘N’, help sam to print the corresponding Triangle.

Example:
Input: ‘N’ = 3

Output: 
1
2 2 
3 3 3

Solution:
void triangle(int n) {
	// Write your code here
	for(int i = 1;i<=n;i++){
		int num = i;
		for(int j = 0;j<i;j++){
			cout << num;
			if(j!=n-1){
			cout << " ";
			}
		}
		num++;
		cout << endl;
	}
}
*/

// reverse astrick right angle triangle pattern

/*
*****
****
***
**
*
*/
/*
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n;i++){
        for(int j=n;j>i;j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
    */
/*
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
		for(int j = n;j>i;j--){
			cout << "*";
			if(j!=i-1){
			cout << " ";
			}
		}
		cout << endl;
	}
    return 0;
}
    */

// same with numbers
/*
12345
1234
123
12
1
*/

/*
int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int num = 1;
		for(int j = n;j>i;j--){
			cout << num;
            num++;
			if(j!=i-1){
			cout << " ";
			}
		}
		cout << endl;
	}
    return 0;
}
*/

//pyramid pattern
/*
   *
  ***
 *****
*/
/*
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        // print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}
*/
/*
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        
        // print spaces
        for (int j = 0; j < i ; j++) {
            cout << " ";
        }

        // print stars
        for (int j = 0; j < 2*n - (2 * i + 1); j++) {
            cout << "*";
        }

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}

*/

/*
to print the pattern 
    *
   ***
 *******
 *******
   ***
    *

*/
/*

int main() {
    int n;
    cin >> n;


    for(int i = 0; i<n;i++){
        // for printing spaces
        for(int j = 0; j < n - i - 1;j++){
            cout << " ";
        }
        //for priniting pattern
        for(int j = 0; j < 2*i+1;j++){
            cout << "*";
        }
        // for printing spaces
        for(int j = 0; j < n - i - 1;j++){
            cout << " ";
        }
        cout << endl;
    }

    for(int i = 0; i<n;i++){
        // for printing spaces
        for(int j = 0; j < i;j++){
            cout << " ";
        }
        //for priniting pattern
        for(int j = 0; j < 2*n - (2*i+1);j++){
            cout << "*";
        }
        // for printing spaces
        for(int j = 0; j < i;j++){
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}

*/

// pattern to be printed 
/*
*
**
***
****
*****
******
*****
****
***
**
*
*/
/*
int main() {
    int n;
    cin >> n;

    for(int i =0; i <n; i++){
        //for star pattern
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << endl;

    }
        for(int i =0; i <n; i++){
            cout << "*";
    }
        cout << endl;

        for(int i =0; i <n; i++){
        //for star pattern
        for(int j=0;j<n-i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
        


    return 0;
    }
*/

// pattern to be printed
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
/*
int main() {
    int n;
    cin >> n;
    int start = 1;

    for(int i=0;i<n;i++){
        if(i%2==0){
            start = 1;
        }
        else{
            start = 0;
        }
        for(int j=0;j<=i;j++){
            cout << start;
            start = 1 - start;
        }
    cout<< endl;
    }

    return 0;
    }
*/

//pattern to be printed
/*
1      1
12    21
123  321
12344321
*/
/*
int main() {
    int n;
    cin >> n;

    int space = 2*(n - 1);
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
            cout << " ";
        }
        for(int j=1;j<=space;j++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << " ";
            cout << j;
        }
        cout<< endl;
        space -= 2;
    }


    return 0;
    }
*/

// pattern to print
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
/*
int main() {
    int n;
    cin >> n;
    int num = 1;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << num;
            cout << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
    }
*/

//pattern to print
/*
A
A B
A B C
A B C D
A B C D E
*/
/*
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char alph = 'A';
        for(int j=0;j<i;j++){
            cout << alph;
            cout << " ";
            alph++;
        }
        cout << endl;
    }

    return 0;
    }
*/

//pattern to print
/*
A B C D E
A B C D
A B C
A B 
A
*/
/*
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char alph = 'A';
        for(int j=0;j<=n-i-1;j++){
            cout << alph;
            cout << " ";
            alph++;
        }
        cout << endl;
    }

    return 0;
    }
*/

//pattern to print
/*
A
B B
C C C
D D D D
E E E E E
*/
/*
int main() {
    int n;
    cin >> n;
    char alph = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << alph;
            cout << " ";
        }
        alph++;
        cout << endl;
    }

    return 0;
    }
*/

//pattern to print
/*
   A
  ABA
 ABCBA
*/
/*
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char alph = 'A';
        // FOR SPACES
        for(int j=0;j<=n-i-1;j++){
            cout << " ";
        }

        for(int j=0;j<(2*i+1);j++){
            cout << alph;
            alph++;
        }

        for(int j=0;j<=n-i-1;j++){
            cout << " ";
        }

        cout << endl;
    }

    return 0;
    }
*/

//Pattern to print
/*
E
D E
C D E
B C D E
A B C D E
*/
/*
int main() {
    int n;
    cin >> n;
    char last = 'A' + n - 1;
    for(int i=0;i<n;i++){
        char start = last - i;
        for(int j=0;j<=i;j++){
            cout << start;
            cout << " ";
            start++;
            }
        
        cout << endl;
        }
    return 0;
    }
*/

//pattern to print
/*
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************
*/
/*
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {

    for (int j = 0; j <= n - i - 1; j++) {
        cout << "*";
        if(j!=n){
            cout<< " ";
        }
    }

    for (int j = 2; j < 2 * (i + 1); j++) {
        cout << "  ";
    }

    for (int j = 0; j <= n - i - 1; j++) {
        cout << "* ";
    }

    cout << endl;
}

for (int i = 0; i < n; i++) {

    for (int j = 0; j <= i; j++) {
        cout << "*";
        if(j!=n){
            cout<< " ";
        }
    }

    for (int j = 2; j <= 2 * n - (2 * i + 1); j++) {
        cout << "  ";
    }

    for (int j = 0; j <= i; j++) {
        cout << "*";
        cout << " ";
    }

    cout << endl;
}



        return 0;
}
*/
/*

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {

    for (int j = 0; j <= i; j++) {
        cout << "*";
        if(j!=n){
            cout<< " ";
        }
    }

    for (int j = 2; j <= 2 * n - (2 * i + 1); j++) {
        cout << "  ";
    }

    for (int j = 0; j <=i; j++) {
        cout << "*";
        cout << " ";
    }

    cout << endl;
}


for (int i = 0; i < n; i++) {

    for (int j = 0; j < n - i - 1; j++) {
        cout << "* ";
    }

    for (int j = 2; j <= 2 * (i + 1); j++) {
        cout << "  ";
    }

    for (int j = 0; j < n - i - 1; j++) {
        if(j==0){
            cout << " ";
        }
        cout << " *";
    }

    cout << endl;
}
        return 0;
}
*/

//pattern to print
/*
******
*    *
*    *
*    *
*    *
******
*/
/*
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
        for(int j=0;j<n;j++){
            cout << "*";
        }
    }
    else{
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1){
            cout << "*";
            }
            else{
                cout << " ";
            }
        }
    }
    cout << endl;
    }

        return 0;
}
*/

//pattern to print
/*
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/

int main() {
    int n;
    cin >> n;
    int start = 2*n - 1;
    for(int i=0;i<start;i++){
        for(int j=0;j<start;j++){
            int top = i;
            int left = j;
            int bottom = start - 1 - i;
            int right = start - 1 -j;

            int layer = n - min(min(top,bottom),min(left,right));
            cout << layer << " ";
            

        }
    cout << endl;
    }

        return 0;
}








