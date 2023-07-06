class Solution {
public:
    vector<int> merge(vector<int> &nums1, vector<int> &nums2){
        vector<int> result(nums1.size() + nums2.size());

        int i =0,j=0,k=0;

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] < nums2[j]){
                result[k++] = nums1[i++];
            }else{
                result[k++] = nums2[j++];
            }
        }

        while(i < nums1.size()){
            result[k++] = nums1[i++];
        }

        while(j < nums2.size()){
            result[k++] = nums2[j++];
        }

        return result;

    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size() + nums2.size());

        result = merge(nums1,nums2);

        double median;

        if(result.size()%2 == 0){
            median = (result[result.size()/2-1] + result[result.size()/2])/2.0;
        }else{
            median = result[result.size()/2];
        }

        return median;
    }
};