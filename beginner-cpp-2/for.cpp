#include <iostream>
#include <cstring>

using namespace std;

int main(){
    for(int i = 0; i < 10; i++){
        cout << i << endl;
    }
    string myString = "Hello, wow";
    for(int i = 0; i < myString.length(); i++){
        cout << myString[i] << endl;
    }
    return 0;
}
