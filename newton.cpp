//WAP to implement Newton's forward and Backward interpolation

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of Data: ";
    cin>>n;
    vector<vector<int> > data(n,vector<int>(n+1,0));
    cout<<"Enter Data x->y"<<endl;
    for(int i=0;i<n;i++){
        cin>>data[i][0];
        cin>>data[i][1];
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            data[j][i]=data[j+1][i-1]-data[j][i-1];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1-i;j++){
            cout<<data[i][j]<<"|";
        }
        cout<<endl;
    } 
    cout<<"Enter value to be predicted : ";
    float p,y;
    cin>>p;
    if(p>data[0][0]&& p<data[1][0]){
        float u=(p-data[0][0])/(data[1][0]-data[0][0]);
        float u1=u;
        y=data[0][1];
        int fact=1;
        for(int i=2;i<=n;i++){
            y+=(u/fact)*data[0][i];
            fact=fact*i;
            u=u*(u1-(i-1));
        }
    }
    else{
        float u=(p-data[n-1][0])/(data[n-1][0]-data[n-2][0]);
        float u1=u;
        y=data[n-1][1];
        int fact=1;
        for(int i=2;i<=n;i++){
            y+=(u/fact)*data[n-i][i];
            fact=fact*i;
            u=u*(u1+(i-1));
        }
    }
     cout<<"Predicted value at " <<p<<" is: "<<y;
}
