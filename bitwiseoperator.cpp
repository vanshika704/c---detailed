
#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b =6;
    cout <<"a&b "<<(a&b)<<endl;// (and) dono 1 honge toh 1 aayega
    cout<<"a|b "<<(a|b)<< endl;//(or)koi ek one hoga toh bhi one aayega
    cout<<"~a "<<(~a)<< endl;//(not) zero ko one me and one ko zero me badal deta h
    cout<<"a^b "<<(a^b)<< endl;// (xor) koi ek one hoga toh output one aayegi agr dono same h toh output 0
    // left shift = hr ek bit ko left side me aage badha do
    // left shift sirf small numbers pr chlti h agr large numbers pr lgado toh negative output dedeti h
    // right shift = hr ek bit ko right side me aage badha do
// padding humesha zero se hoti h positive ke case me prr agr baat negative ki aaye toh compiler dependent hoti h
// one time right shift krne pr one time us number ko two se divide krdo or agr two times right shift kiya toh divide by 4
// agr same left shift ke sath kiya jaaye toh one time me multiply by 2, do baar me 4 se multiply
cout<<( 17>>1)<<endl;
cout<<( 17>>1)<<endl;
cout<<( 19<<1)<<endl;
cout<<( 21<<2)<<endl;

}
