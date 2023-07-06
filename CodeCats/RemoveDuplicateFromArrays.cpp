class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> umap;
        int k = nums.size();
        for(int i =0; i<nums.size(); i++){
            umap[nums[i]]+=1;
            if(umap[nums[i]]>1){
                k--;
            }
        } 

        vector<int> arr;

        for(int i =0; i<nums.size(); i++){
            if(umap[nums[i]] == 1){
                arr.push_back(nums[i]);
                
            }
            else{
                arr.push_back(nums[i]);
                i =i + umap[nums[i]]-1;
            }
        }

        for(int i =0; i<k; i++){
            nums[i] = arr[i];
        }

        return k;

    }
};
