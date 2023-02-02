

                                                           // Verifying alien string  //



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
