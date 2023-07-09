#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr{1,2,0};
    map<int,int> map;

    for(int i =0; i<arr.size(); i++){
        map[arr[i]]++;
    }

    for(int i =0; i<=arr.size(); i++){
        if(map[i] == 0){
            cout<<i;
            break;
        }
    }

}