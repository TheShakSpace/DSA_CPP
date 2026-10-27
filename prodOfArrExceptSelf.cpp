// optimal approach
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        
        // Calculate the prefix products
        int prefixProduct = 1;
        for(int i = 0; i < n; i++){
            result[i] = prefixProduct;
            prefixProduct *= nums[i];
        }
        
        // Calculate the suffix products and multiply with the prefix products
        int suffixProduct = 1;
        for(int i = n - 1; i >= 0; i--){
            result[i] *= suffixProduct;
            suffixProduct *= nums[i];
        }
        
        return result;
    }
};