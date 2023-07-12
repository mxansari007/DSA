#include<bits/stdc++.h>
using namespace std;

int main(){    
        vector<int> heights{180,165,170};
        vector<string>names {"Mary","Emma","John"};
        unordered_map<int,basic_string<char>> m;

        for(int i =0; i<heights.size(); i++){
            m[heights[i]] = names[i];
        }

        vector<string> result;
        sort(heights.begin(),heights.end(),greater<int>());

        for(int i =0; i<heights.size(); i++){
            result.push_back(m[heights[i]]);
        }

        
}
