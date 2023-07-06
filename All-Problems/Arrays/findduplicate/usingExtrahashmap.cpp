#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{1,2,4,5,4};

    map<int,int> map;

    for(int i =0; i<arr.size(); i++){
        map[arr[i]]++;
        if(map[arr[i]] > 1){
            cout<<arr[i];
            break;
        }
    }

}