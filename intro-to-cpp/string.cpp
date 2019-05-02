//string.cpp
/*
 * This program gives a brief overview of the 'string' data type
 * and a few basic ways to modify and display strings
 */

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string hello = "Hello.";

    cout << hello << endl;
    cout << hello.length() << endl;

    hello += " Greetings.";

    cout << hello << endl;
    cout << hello.length() << endl;

    string string_num = "3 + 4";
    int int_num = 3 + 4;
    
    cout << string_num << endl;
    cout << int_num << endl;

    return 0;
}

// Expected output:
/*

Hello.
6
Hello. Greetings.
17
3 + 4
7

 */
