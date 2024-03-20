#include<iostream>
using namespace std;
   int getMin( int num[], int n){
    int mini = INT32_MAX;
    for( int i = 0;i<=n;i++){
        mini = min( mini, num[i]);
    }
    return mini;
   }


   int getMax( int num[], int n){
    int maxi = INT32_MIN;
    for( int i = 0;i<=n;i++){
        maxi = max( maxi, num[i]);
    }
    return maxi;
   }


int main(){ int i,size,j,n;
cout<<" enter number of elements of array";
cin>> size;
 cout<< " enter the elements of array";
 int num[15];
 for ( i=0;i<=size; i++){
    cin>> num[i];
 }
return 0;
 
  }
