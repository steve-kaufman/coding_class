//cin.cpp
/*
 * This program gives a brief overview of the cin command
 */

#include <iostream>

using namespace std;

int main(){
    string name;
    cout << "What's your name? ";
    cin >> name;
    cout << "Hello, " << name << "." << endl;
    return 0;
}

// Expected output: (user input wrapped in **)
/*

What's your name? *write name here*
Hello, *name you wrote*.

 */
