// //WAP to implement Newton's forward and Backward interpolation

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of Rows: ";
    cin>>n;
    vector<vector<int> > v(n,vector<int>(n+1,0));
    cout<<"Enter Year and population"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i][0];
        cin>>v[i][1];
    }
    int num=n;
    for(int i=2;i<=n;i++){
        for(int j=0;j<num-1;j++){
            v[j][i]=v[j+1][i-1]-v[j][i-1];
        }
        num--;
    }
    num=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<num+1;j++){
            cout<<v[i][j]<<"|";
        }
        num--;
        cout<<endl;
    } 
    cout<<"Enter predicted value: ";
    float p;
    cin>>p;
    float u=(p-v[0][0])/(v[1][0]-v[0][0]);
    float u1=u;
    float y=v[0][1];
    int fact=1;
    for(int i=2;i<=n;i++){
        y+=(u/fact)*v[0][i];
        fact=fact*i;
        u=u*(u1-(i-1));
    }
    cout<<"Predicted population at year " <<p<<"is: "<<y;
}