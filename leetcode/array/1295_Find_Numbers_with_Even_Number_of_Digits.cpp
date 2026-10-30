// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int result = 0;

        for(int x : nums)
        {
            int count = 0;
            int temp = x;

            while(temp != 0)
            {
                temp /= 10;
                count ++;
            }
            if(count % 2 == 0) result ++;
        }

        return result;
        
    }
};