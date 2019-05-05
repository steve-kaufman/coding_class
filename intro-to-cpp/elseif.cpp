#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter any number: ";
    cin >> number;
    if(number > 0) cout << "You entered a positive number" << endl;
    else if(number < 0) cout << "You entered a negative number" << endl;
    else cout << "Your number is zero" << endl;
    return 0;
}
