#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> nums{1,2,3,4,5,6};
    int k;
    cout<<"Enter the value of K: ";
    cin>>k;

    vector<int> preserve(nums.begin(),nums.end());

    for(int i =0; i<nums.size(); i++){
        nums[(i+k)%nums.size()] = preserve[i];
    }

    for(int i =0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

}