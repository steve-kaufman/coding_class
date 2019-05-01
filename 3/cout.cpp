//cout.cpp
/*
 * This program gives a brief overview of how to use the 'cout' command
 */

#include <iostream>

using namespace std;

int main(){
    cout << "Hello, world." << endl;
    cout << "Hello, " << "world." << endl;
    cout << "Hello, world.\n";
    cout << "1 + 2 = 3" << endl;
    cout << "1 + 2 = " << 3 << endl;
    cout << "1 + 2 = " << 1 + 2 << endl;
    return 0;
}

// Expected output:
/*

Hello, world.
Hello, world.
Hello, world.
1 + 2 = 3
1 + 2 = 3
1 + 2 = 3

*/
