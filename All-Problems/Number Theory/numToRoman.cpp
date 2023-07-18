#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 543;

    int digits = log10(543) +1;

    cout<<digits;
        int tens = pow(10,digits);
        
        int temp = (num % tens) - (num % (tens/10));

        

    cout<<temp;

    num -= temp;
    cout<<"\n"<<num;
}
