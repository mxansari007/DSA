#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{1,2,4,5,4};

    sort(arr.begin(),arr.end());

    for(int i =0; i<arr.size()-1; i++){
        if(arr[i] == arr[i+1]){
            cout<<arr[i];
            break;
        }
    }

}