/*
    Problem: LeetCode 242 - Valid Anagram
    Link: https://leetcode.com/problems/valid-anagram/

    Definition:
    An anagram is a word or phrase formed by rearranging the letters
    of another word or phrase, using all the original letters exactly once.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        vector<int> freq(26, 0);

        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                return false;
            }
        }

        return true;
    }
};