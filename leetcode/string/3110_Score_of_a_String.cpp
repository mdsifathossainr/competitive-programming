/*
    Problem: LeetCode 3110 - Score of a String
    Link: https://leetcode.com/problems/score-of-a-string/

    Definition:
    The score of a string is the sum of the absolute differences
    between the ASCII values of adjacent characters.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for(int i=1 ; i<s.size() ; i++)
        {
            score += abs(s[i-1] - s[i]);
        }
        return score;
    }
};