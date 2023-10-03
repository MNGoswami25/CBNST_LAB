//Write program to find the root of an Algebric and transcondental equation using bisection method

#include<bits/stdc++.h>
using namespace std;

double calculate(vector<int>eq,int n,double x){
    double c=0;
    for(int i=0;i<eq.size();i++){
        c=c+double(eq[i]*pow(x,n));
        n--;
    }
    return c;
}

int main(){
    int n,temp;
    double a,b,fa,fb,favg,avg,tv;
    cout<<"Enter Highest degree of the equation: ";
    cin>>n;
    vector<int>eq;
    for(int i=n;i>=0;i--){
        cout<<"Enter coffecient of x"<<i<<": ";
        cin>>temp;
        eq.push_back(temp);
    }
    cout<<"Enter value of a and b: ";
    cin>>a>>b;
    fa=calculate(eq,n,a);
    fb=calculate(eq,n,b);
    cout<<"Enter tolerate Value: ";
    cin>>tv;
     do {
        avg = (a + b) / 2;
        favg = calculate(eq, n, avg);
        cout<<a<<" "<<b<<" "<<avg<<" "<<favg<<endl;
        if (favg < 0) {
            a = avg;
        } else {
            b = avg;
        }
    } while (fabs(favg) > tv);

    cout<<"Root: "<<avg;
}
