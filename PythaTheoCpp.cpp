#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main ()
{
    int a;
    int b;
    
    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    
    float legA = pow(a,2);
    float legB = pow(b,2);
    float hypo = sqrt(legA + legB);
    
    cout << "Hypotenuse (Vale of c): " << hypo << endl;
}
