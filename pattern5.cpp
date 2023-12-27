#include<iostream>
using namespace std;
int main(){
    int rows,i,j; int count =1;
    cout<<"enter number";
    cin>>rows;
    
    for(i=1;i<=rows;i++){
        int space= rows-i;
        while(space){
            cout<<" ";
            space = space-1;
        }
        for(j=1;j<=i;j++){
            cout<<"*";
           
        }
        cout<<endl;
    }
}