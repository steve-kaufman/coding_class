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

    return 0;
}
