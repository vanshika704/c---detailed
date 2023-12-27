#include<iostream>
using namespace std;
int main(){
    int rows,i,j; int count =1;
    cout<<"enter number";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}