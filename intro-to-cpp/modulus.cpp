//modulus.cpp
/*
 * This program gives a brief example of how to use the modulus operator
 */

#include <iostream>

using namespace std;

int main(){
    int myInt = 5;
    cout << myInt << endl;
    myInt /= 2;
    cout << myInt << endl;
    int remainder = 5 % 2;
    cout << remainder << endl;

    cout << "5 / 2 is " << myInt << " with remainder " << remainder << endl;
    return 0;
}

// Expected output
/*

5
2
1
5 / 2 is 2 with remainder 1

*/
