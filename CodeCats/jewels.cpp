#include<bits/stdc++.h>
using namespace std;


int main(){
    string jewels = "aA";
    string stones = "aAAbbbbb";

        unordered_map<char,int> m; 
        int count = 0;

        for(int i = 0; i<jewels.length(); i++){
            m[jewels[i]] = 1;
        }

        for(int i = 0; i<stones.length(); i++){
            if(m[stones[i]] == 1){
                count++;
            }
        }
    
    cout<<count;

}



//O(N) time complexity
//O(size of (jewels)) space complexity