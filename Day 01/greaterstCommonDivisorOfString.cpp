

                                                            // Greaterst Common Divisor Of String  //
                                                            
                                                            
For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).
Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

 

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"
Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int size1=str1.size();
        int size2=str2.size();

        if(str1+str2!=str2+str1)
        return "";

        return str1.substr(0,gcd(size1,size2));
    }
};
