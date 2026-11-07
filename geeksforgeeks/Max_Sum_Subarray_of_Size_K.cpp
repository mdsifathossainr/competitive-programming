// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
       
       int n = arr.size();
       int max_sum = 0;
       int l = 0;
       int r = 0;
       
       int sum = 0;
       
       while(r < n)
       {
           sum += arr[r];
           if(r - l + 1 == k)
           {
               max_sum = max(max_sum , sum);
               sum -= arr[l];
               l++;
           }
           r++;
       }
       
       return max_sum;
       
    }
};