#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int n,i=0,ans=0;// declaration
    cout<<" enter number";
    cin>>n;// taking input
while(n!=0){// considering a while loop condition , here bit is found by the last digit of the number
    int bit = n & 1;// after finding bit we know that the formula to fing the number is the product of bit with 10 ^i+ans
    ans= (bit * pow(10,i))+ ans;//to find the reverse of the number ans= (ans *pow(10,i)+bit)
    n=n>>1;//right shifting the number
    i++;
}
cout<<ans<<endl;
}