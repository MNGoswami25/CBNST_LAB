//WAP to implement Newton's Divide and Difference
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of Data: ";
    cin>>n;
    vector<vector<float> > data(n,vector<float>(n+1,0));
    cout<<"Enter Data x->y"<<endl;
    for(int i=0;i<n;i++){
        cin>>data[i][0];
        cin>>data[i][1];
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            data[j][i]=(data[j+1][i-1]-data[j][i-1])/(data[i-1+j][0]-data[j][0]);
        }
    }               
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1-i;j++){
            cout<<data[i][j]<<"|";
        }
        cout<<endl;
    } 
    cout<<"Enter at which value to be predicted : ";
    float p,y;
    cin>>p;
    y=data[0][1];
    float u=p-data[0][0];
    for(int i=2;i<=n;i++){
        y+=u*data[0][i];
        u=u*(p-data[i-1][0]);
    }
     cout<<"Predicted value at " <<p<<" is: "<<y;
}
