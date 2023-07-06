class Solution {
public:

       void merge(vector<int> &nums,vector<int> &left,int leftSize, vector<int> &right, int rightSize){

       int i = 0, j =0, k = 0;

       while(i < leftSize && j < rightSize){
           if(left[i] <= right[j]){
               nums[k] = left[i];
               i++;
           }else{
               nums[k] = right[j];
               j++;
           }
           k++;
       }

       while(i < leftSize){
           nums[k] = left[i];
           i++;
           k++;
       }

       while(j < rightSize){
           nums[k] = right[j];
           j++;
           k++;
       }

   } 
    


    void mergeSort(vector<int> &nums, int size){
        if(size < 2){
            return;
        }

        int mid = size /2;
        vector<int> left(mid);
        vector<int> right(size - mid);

        for(int i =0; i<mid; i++){
            left[i] = nums[i];
        }

        for(int i = mid; i<size; i++){
            right[i - mid] = nums[i];
        }

        mergeSort(left,mid);
        mergeSort(right,size - mid);
        merge(nums,left,mid,right,size - mid);
    }
    
    
    int findKthLargest(vector<int>& nums, int k) {

    mergeSort(nums,nums.size());
        
     return nums[nums.size()-k];

    }
};