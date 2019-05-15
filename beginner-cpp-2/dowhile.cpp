#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string name;
    string again;

    do{
        cout << "Who would you like me to greet? ";
        cin >> name;
        cout << "Hello, " << name << "." << endl;
        cout << "Do another greeting (y or n)? ";
        cin >> again;
    } while(again == "y");

    return 0;
}
