#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,swapper;

    a = 7;
    b = 5;

    cout<<"Before Swapping a is : "<<a<<endl;
    cout<<"Before Swapping b is : "<<b<<endl;

    swapper = a ^ b;

    a = a ^ swapper;
    b = b ^ swapper;

    cout<<"After Swapping a is : "<<a<<endl;
    cout<<"After Swapping b is : "<<b<<endl;

}