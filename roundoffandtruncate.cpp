//Write A Program to round off and truncate the True Value;

#include <iostream>
#include<math.h>
using namespace std;

int main() {

    float T,TV,RO;
    int D;
    cout << "Enter a True value: ";
    cin >> T;
    cout << "Enter the number of decimal places you want: ";
    cin >> D;
    float factor =pow(10.0,D);
    TV=int(T* factor) / factor;
    RO=int(T * factor + 0.5) / factor;
    cout << "Original Value: "<<T<< endl;
    cout << "Truncated Value: "<<TV<< endl;
    cout << "Rounded Value: " <<RO<< endl;
    return 0;
}
