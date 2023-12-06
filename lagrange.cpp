#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of data: ";
    cin >> n;
    float data[n][2];
    cout << "Enter x and y simultaneously" << endl;
    for (int i = 0; i < n; i++) {
        cin >> data[i][0];
        cin >> data[i][1]; 
    }

    float p, ans = 0;
    cout << "Enter predicted value: ";
    cin >> p;

    for (int i = 0; i < n; i++) {
        float temp = data[i][0];
        float res = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                res = res * (p - data[j][0]) / (temp - data[j][0]);
            }
        }
        ans += res * data[i][1];
    }

    cout << endl << ans;
    return 0;
}
