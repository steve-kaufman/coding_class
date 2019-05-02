//float.cpp
/*
 * This program gives a short overview of the 'float' data type
 * and the different arithmetic operators that can be used to modify it.
 */

#include <iostream>

using namespace std;

int main(){
    float myFloat = 3.25;
    cout << myFloat << endl;

    myFloat += 1.5;
    cout << myFloat << endl;

    myFloat -= 0.5;
    cout << myFloat << endl;

    myFloat *= 3;
    cout << myFloat << endl;

    myFloat /= 2;
    cout << myFloat << endl;
    return 0;
}

// Expected output:
/*

3.25
4.75
4.25
12.75
6.375

*/
