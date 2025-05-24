// TIME COMPLEXITY AND SPACE COMPLEXITY

// TIME COMPLEXITY
/*
the rate at which the time , required to run a code changes wrt the input size.

basically, time complexity depends on the input size not the time taken by machine to run the code.
*/
/*
// timeComplexity Example

#include <iostream>
using namespace std;

int main(){
for(int i = 1; i <= 5; i++){
    cout << "gkpr" << endl;
}

// the time complexity of this code will be the number of steps the code will take to be executed 
// so if we write in terms of big of O it will be O ( number of steps)

// time complexity is O(15) ----> O(3 * 5 )
// gkpr will be printed 5 times
// 3 steps are involved each time that is checking/comparision , printing and incremnet.

// ***** BUT THIS IS NOT AN IDEAL APPROACH TO CALCULATE TIME COMPLEXITY CUZ AS WE MOVE AHEARD THE LOOPS WILL GET MORE AND MORE COMPLEX *****

// O(3N)



return 0;
}

*/

// timeComplexity is always calculated for the worst case scenario

// _____ best case ______ worst case_____average case

// best case ----- least amout of time taken by code for execution.

// worst case ----- most amout of time taken by code for execution.

// average case ---- self explainatory ( btw best and worst).

//// avoid constant terms while calculation of time complexity
// for example O(4N^3 + 3N^2 + 8) : consider value of N is equal to 10^5 big O becomes O(4(10^5)^3 + 3(10^5)^2 + 8) .....here 8 is constant and it is avoided....

/*
int x = 2;
for(int i =1; i<= N; i++){
    cout<<"gkpr"
}
*/

// in this case x = 2 runs in a constant time rest for the for loop it is same example as stated above ...... here time complexity becomes O(N+1) ..... 1 is constant which is very less significant so we write time complexity as O(3N) avoinding the constant term....

// now we have took an example of O(3N^3 + 3N^2 + 8 ) we have reduced it to O(4N^3 + 3N^2) .

// note: we can avoid lower values ( 3N^2) &&&& also avoid constants multiplied to N so final big O notation becomes O(N^3)

/*
// VARIOUS TIME COMPLEXITY NOTATIONS

BIG O -> Represents the worst case time complexity that is upper bound.
Theta Notation -> Represents the average case time complexity.
Omega Notation -> Represents the best case time complexity that is lower bound.

*/

// example 1
/*
for(int i = 0; i<N;i++){
    for(int j=0;j<N;j++){
        //Block of code
        //that runs in constant time
    }
}

// solution
// the outer loop runs from 0 to N-1 that is n times.
// the inner loop runs from 0 to N-1



Illustration 

for i = 0, j = [0,1,2,3,.........,N-1]
for i = 1, j = [0,1,2,3,.........,N-1]
for i = 2, j = [0,1,2,3,.........,N-1]
for i = 3, j = [0,1,2,3,.........,N-1]
for i = 4, j = [0,1,2,3,.........,N-1]
for i = 5, j = [0,1,2,3,.........,N-1]
.
.
for i = N-1,j = [0,1,2,3.........,N-1]

------> outer loop runs N times
------> inner loop runs N times
------> so N*N = N^2


*/

//example2
/*
for(int i = 0; i < N; i++){
    for(int j=0; j <= i; j++){
        //Block of code
        // that runs in constant time
    }
}

here j is depenent on value of i
// the outer loop runs of O to N-1
// inner loop runs from O to N-1

ILLUSTRATION

/*
for i = 0, j = [0] // 1 times
for i = 1, j = [0,1] // 2 times
for i = 2, j = [0,1,2] // 3 times
for i = 3, j = [0,1,2,3] // 4 times
for i = 4, j = [0,1,2,3,4] // 5 times
for i = 5, j = [0,1,2,3,4,5] // 5 times
.
.
for i=N-1, j = [0,1,2,3,4,5,..........,N-1] // N times

// now we can clearly observe the total number of steps are 1 + 2 + 3 + 4+ 5 + ...... + N.
// we know sum of natural numbers is (N*(N+1))/2 = N^2/2 + N/2
// so time complexity becomes O(N^2/2 + N/2)
// ignoring lower values time complexity becomes O(N^2)


*/


// SPACE COMPLEXITY

//space complexity refers to the memory space that a code occupies while being executed .

// technical defination ---> space complexity refers to the summation of auxiliary space and the input space. auxilary space refers to the space that we use additionally to solve a problem. and input space refers to the space we use to store the inputs

// example

/*
Input(a) // 1 input space
Input(b) // 1 input space
c = a + b
// c-> 1 auxilary space
*/

// b = a + b .... here space complexity is reduced as we are not using any extra variable to store the value... but in interview its better to not manipulate given data even though we might increase the space complexity so better to use c = a + b 


