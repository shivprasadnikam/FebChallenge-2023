


                                                        // Permutation in string  //




class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        /*
        1) Make int array
        2) Store frequency of each char
        3) loop through s2 if we found match then 
                a) decrement totalChar--
                b) decrement char frequency from array
        4) If window gets exceeded after founding any of char 
                a) increment TotalChar++
        5)Final decision
                a) If totalChar==0 return true;
                b) else false;

        */
        //making an array to store frquency size of 26
        int m[26]={0};
        //mapping char frequency and storing in m  of s1 string
        for(char c : s1)
        {
            m[c-'a']++;
        }

        int i=0,j=0,totalChar=s1.size();

        //looping through s2 checking for s1's permutaion
        while(j<s2.size())
        {
            /* if we get match then we are doing two things
                    a) decrementing frequency from array
                    b) decrementing totalChar value

            */
            if(m[s2.at(j++)-'a']-- >0)
            {
                totalChar--;
            }
            // we found match permutaion of s1 into s2
            if(totalChar==0)
             return true;
            /* if we doesn't get match then we are doing two things
                    a) incremting frequency from array
                    b) increamating totalChar value
                    c) maintaing window

            */
            // validating condition of window must be equal to s1.size()
            if(j-i==s1.size() && m[s2.at(i++)-'a']++ >=0)
            {
                totalChar++;
            }
            
        } 
        return false;
    }
};
