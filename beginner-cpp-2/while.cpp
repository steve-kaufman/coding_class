#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int x = 0;
    while(x < 10){
        cout << x << endl;
        x++;
    }
    string myString = "";
    while(myString.length() < 10){
        myString += "q";
        cout << myString << endl;
    }
    return 0;
}
