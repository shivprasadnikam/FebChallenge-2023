

                                                            // Zigzag Conversion  //


class Solution {
public:
    string convert(string s, int n) {
        // if num of row is one
        if(n==1){
            return s;
        }
        // empty string
        string ans="";
        int val=0;
        for(int i=2*(n-1);i>=0;i=i-2){
            int j=val;
            int skip=true;
            while(j<s.size()){
                
                ans+=s[j];
                j+=(i!=0&&i!=2*n-2?skip?i:2*n-2-i:2*n-2);
                skip=!skip;
            }
            val++;
        }
        return ans;
    }
};
