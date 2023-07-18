#include<bits/stdc++.h>
using namespace std;



int main(){

    int num[] = {1,1,2,3,3,4,4,5};

    int size = sizeof(num)/sizeof(num[0]);

    int Xor;

    for(int i =0; i<size; i++){
        Xor^=num[i];
    }

    int setBit = Xor | ~(Xor-1);
    int number = (-1)*setBit;
    int partOne = 0, partTwo = 0;

    for(int i =0; i<size; i++){

        if(num[i]&number == 0){
            partOne^=num[i];
        }else{
            partTwo^=num[i];
        }
    }

    cout<<partOne<<" "<<partTwo;

}