#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string name;
    cout << "What is your name? ";
    cin >> name;
    if(name.length() > 5){
        cout << "Your name has more than five letters in it" << endl;
    }
    else{
        cout << "Your name has five or fewer letters in it" << endl;
    }
    return 0;
}
