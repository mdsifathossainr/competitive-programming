/*
Problem: LeetCode 125 - Valid Palindrome
Link: https://leetcode.com/problems/valid-palindrome/
*/

class Solution
{
public:
    bool isPalindrome(string s)
    {

        for (char &c : s)
        {
            c = tolower(c);
        }

        string s1;

        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                s1.push_back(s[i]);
            }
        }
        string s2 = s1;
        reverse(s2.begin(), s2.end());

        return s1 == s2;
    }
};