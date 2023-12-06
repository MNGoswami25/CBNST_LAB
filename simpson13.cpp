//WAP to implement simpsons 1/3
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
float fun(float x) {
    return log(x);
}
int main() {
    float lower_limit;
    float upper_limit;
    cout<<"Enter lower limit: ";
    cin>>lower_limit;
    cout<<"Enter Upper limit: ";
    cin>>upper_limit;
    float n;
    cout<<"Enter number of terms: ";
    cin>>n;
    float h = (upper_limit - lower_limit) / n;
    vector<vector<float>> data(n + 1, {0.0, 0.0});
    for (int i = 0; i <= n; i++) {
        float y = fun(lower_limit);
        data[i][0] = lower_limit;
        data[i][1] = y;
        lower_limit += h;
    }
    float temp1 = 0, temp2 = 0;
    for (int i = 1; i <= n; i += 2) {
        temp1 += data[i][1];
    }
    for (int i = 2; i <= n - 1; i += 2) {
        temp2 += data[i][1];
    }
    float ans = (h / 3) * ((data[0][1] + data[n][1]) + 4 * temp1 + 2 * temp2);
    cout <<ans << endl;
    return 0;
}
