/*
    Problem: LeetCode 26 - Remove Duplicates from Sorted Array
    Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i= 1 ; i<nums.size() ; i++)
        {
           if(nums[k-1] != nums[i])
           {
               nums[k] = nums[i];
               k++;
           }
        }
        return k;
    }
};