#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int fivePointSixRounded = round(5.6);
    int fivePointFourRounded = round(5.4);
    cout << "5.6 rounded is " << fivePointSixRounded << endl;
    cout << "5.4 rounded is " << fivePointFourRounded << endl;
    int twopowfive =  pow(2, 5);
    float twopowminusfive = pow(2, -5);
    cout << "2 ^ 5 is " << twopowfive << endl;
    cout << "2 ^ -5 is " << twopowminusfive << endl;
    return 0;
}
