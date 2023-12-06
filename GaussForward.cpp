// WAP to implement Gauss forward interpolation 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of Data: ";
    cin>>n;
    vector<vector<float> > data(n,vector<float>(n+1,0));
    cout<<"Enter Data"<<endl;
    for(int i=0;i<n;i++){
        cin>>data[i][0];
        cin>>data[i][1];
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            data[j][i]=data[j+1][i-1]-data[j][i-1];
        }
    }
    cout<<"Enter value to be predicted : ";
    float p,y,u;
    cin>>p;
     cout<<"Difference Table"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<data[i][j]<<"|";
        }
        cout<<endl;
    } 
    y=data[n/2][1];
    u=(p-data[n/2][0])/(data[1][0]-data[0][0]);
    float u1=u;
    float fact=1;
    for(int i=2;i<=n;i++)
    {
        y=y+(u1/fact)*data[(n-1)/i][i];
        fact=fact*i;  
        if(i%2==0){
            u1=u1*(u-(i/2));
        }
        else{
            u1=u1*(u+(i/2));
        }
    }
    cout<<endl<<"The desired value is: "<<y;
    return 0;
}