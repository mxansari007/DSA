#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<int>> nums{{1,2,3,4,5},{1,3,4,5,6},{1,3,4,7,8,5}};
    vector<int> result;
    set<int> s;

    for(int i =0; i<nums.size(); i++){
        s.insert(nums[0][i]);
    }

    for(auto i = s.begin(); i != s.end(); i++){
        cout<<*i<<" ";
    }

    cout<<"\n";



    for(int i =1; i<nums.size(); i++){
        set<int> temp;
        for(int j =0; j<nums[i].size(); j++){
            if(s.find(nums[i][j]) != s.end()){
                cout<<*s.find(nums[i][j])<<" ";
                temp.insert(nums[i][j]);
            }
        }

        s = temp;
    }

    for(auto i =s.begin(); i!=s.end(); i++){
        result.push_back(*i);
    }

    cout<<"\n";

    for(int i =0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}