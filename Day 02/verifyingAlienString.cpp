
In an alien language, surprisingly, they also use English lowercase letters, but possibly in a different order. The order of the alphabet is some permutation of lowercase letters.

Given a sequence of words written in the alien language, and the order of the alphabet, return true if and only if the given words are sorted lexicographically in this alien language.

 

Example 1:

Input: words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"
Output: true
Explanation: As 'h' comes before 'l' in this language, then the sequence is sorted.
Example 2:

Input: words = ["word","world","row"], order = "worldabcefghijkmnpqstuvxyz"
Output: false
Explanation: As 'd' comes after 'l' in this language, then words[0] > words[1], hence the sequence is unsorted.



class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) 
    {
        /* using hashmap
        unordered_map<char,char> m;
        for(int i=0;i<26;i++)
        {
            m[order[i]]=i+'a';
        }
        for(auto &w:words)
        {
            for(auto &ch:w)
            {
                ch=m[ch];
            }
        }
        return is_sorted(words.begin(),words.end());*/

        //using  loop

        // traversing through words
        for(int i=0; i<words.size()-1; i++)
        {
            string word1=words[i];
            string word2=words[i+1];

            int i1=0,i2=0;

            //charter matching
            while(word1[i1]==word2[i2])
            {
                i1++;
                i2++;
            }

            //verfiying index value 
            int right= order.find(word1[i1]);
            int left = order.find(word2[i2]);

            // lexicographical order break so return false
            if(right>left)
            return false;
        }
        return true;
    }
};
