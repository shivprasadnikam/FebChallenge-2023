

                                                                  // Jump Game II  //


class Solution {
public:
    int jump(vector<int>& nums) {
        int size=nums.size();
        //edge cases
        //if there is only one element
        if(size<=1)
        return 0;
        //if there is first element which zero then you cant jump
        if(nums[0]==0)
        return 1;

        //remaing cases
        int jump=1;
        int maxReach=nums[0];
        int step=nums[0];

        for(int i=1; i<size; i++)
        {
            if(i==size-1)   // If we reach destination return num of jump
            return jump;

            maxReach=max(maxReach,i+nums[i]);
            step--;

            if(step==0)
            {
                jump++;
                if(i>=maxReach)
                return -1;
                step=maxReach-i;
            }
        }
        return 0;
    }
};
