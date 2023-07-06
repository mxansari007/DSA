#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{1,2,4,5,4};

    int n = arr.size();
    for(int i =0; i<n; i++){
        arr[arr[i]%n] +=n;
    }

    for(int i =0; i<n; i++){
        if(arr[i]/n > 1){
            cout<<i;
            break;
        }
    }

}

