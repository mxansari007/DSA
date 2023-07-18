#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;

    a = 7;
    b = 5;

    cout<<"Before Swapping a is : "<<a<<endl;
    cout<<"Before Swapping b is : "<<b<<endl;

    

    a = a ^ a ^ b;
    b = b ^ a ^ b;

    cout<<"After Swapping a is : "<<a<<endl;
    cout<<"After Swapping b is : "<<b<<endl;

}