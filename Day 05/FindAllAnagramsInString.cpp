

                                                        // Find all anagrams in string  //




class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        /*
            using Sliding window appraoch 
            1) First create three vectors
               a)p_freq(26,0) for storing freq of chars in p
               b)window(26,0) for storing freq of char within freq
               c)ans vector for return indices
            2) Loop through both s and p and store freq of char
            3) During sliding window make changes in freq of both s and p according to window
            4) if(p_freq==window) push i-len_p+1 in ans and return

            //  IMPORTANT EDGE CASE   //
            if(lenOfP<lenOfS)
            return{};
        */
        int len_s=s.size();  //size of s
        int len_p=p.size();  //size of p

        //edge case
        if(len_p>len_s)
        return {};

        //vectors for storing freq
        vector<int>p_freq(26,0);
        vector<int>window(26,0);

        //storing frequency
        for(int i=0; i<len_p; i++)
        {
            p_freq[(p[i]-'a')]++;
            window[(s[i]-'a')]++;
        }
        // vector to return ans
        vector<int>ans;
        if(p_freq==window)
        ans.push_back(0);

        for(int i=len_p; i<len_s; i++)
        {
            // decrementing freq that element which into window
            window[s[i-len_p]-'a']--;
            //incrementing freq of newly added element
            window[s[i]-'a']++;

            //checking wheather we find anagram or what
            if(p_freq==window)
            ans.push_back(i-len_p+1);
        }
        return ans;
    }
};
