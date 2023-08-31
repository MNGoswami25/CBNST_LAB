//Program to find Absolute , Relative and percentage error;

#include<iostream>
using namespace std;

int main(){
    float T,A,Ea,Er,Pr;
    cout<<"Enter True Value: ";
    cin>>T;
    cout<<"Enter Absolute Value: ";
    cin>>A;
    Ea=T-A;
    Er=Ea/T;
    Pr=(Ea/T)*100;
    cout<<"Absolute Error: "<<Ea<<endl<<"Relative Error: "<<Er<<endl<<"Percentage Error: "<<Pr<<endl;
}
