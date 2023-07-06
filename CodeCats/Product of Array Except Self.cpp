class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> store(nums.size(),1);
    
        int product =1;
        for(int i =1; i<nums.size(); i++){
            product*=nums[i-1];
            store[i] = product;
        }
        product =1;
        for(int j = nums.size() - 2; j>=0; j--){
            product*=nums[j+1];
            store[j]*=product;
        }

        return store;
    }
};
