//int.cpp
/*
 * This program gives a brief overview of the 'int' data type
 * and the different arithmetic operators that can be used to modify it
 */

#include <iostream>

using namespace std;

int main(){
    int myInt = 2;

    cout << myInt << endl;

    myInt = 4;

    cout << myInt << endl;

    myInt +=  2;

    cout << myInt << endl;

    myInt *= 2;

    cout << myInt << endl;

    myInt /= 2;

    cout << myInt << endl;

    return 0;
}

// Expected output:
/*

2
4
6
12
6

*/
