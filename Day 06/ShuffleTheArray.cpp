

                                                               // Shuffle the array  //


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size=nums.size();
        //edge case
        if(size%n!=0)
        {
            return {};
        }

        /*
        1) Create vector named ans
        2) Push alternate elements int i=0,j=1;
           i++ and j++ while(j<size-1)
        */
        
        vector<int>ans;   // creating vector
        int i=0,j=size/2;
        while(j<size)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        return ans;
    }
};
