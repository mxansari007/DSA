class Solution {
public:
    set<int, greater<int>> makeSet(vector<int> nums){
        set<int, greater<int>> s;

        for(int i =0; i<nums.size(); i++){
            s.insert(nums[i]);
        }

        return s;
    }

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
            set<int, greater<int>> n1,n2;
            vector<vector <int>> result;
            vector<int> r1,r2;

           n1 = makeSet(nums1);
           n2 = makeSet(nums2);
            set<int, greater<int>>::iterator ite;
           for(ite = n1.begin(); ite!=n1.end(); ite++){
               if(n2.find(*ite)==n2.end()){
                   r1.push_back(*ite);
               }
           }

              for(ite = n2.begin(); ite!=n2.end(); ite++){
               if(n1.find(*ite)==n1.end()){
                   r2.push_back(*ite);
               }
           }

        result.push_back(r1);
        result.push_back(r2);
        return result;
            
        }
    
};
