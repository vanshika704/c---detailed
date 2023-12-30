#include<iostream>
using namespace std;
int main(){
  
int prod=1;int n;
cout<<" enter number";
   cin>>n;
int sum= 0;
while(n!=0){
    int digit = n%10;
prod= prod* digit;
sum = sum+ digit;
n+ n/10;
}
int ans = prod - sum;
return ans;
}