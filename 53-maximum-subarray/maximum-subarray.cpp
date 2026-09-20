   /*int maxSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        int len=nums[0];
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                len=max(sum,len);
            }
        }
        return len;
    }
};
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum = 0;
        int maxSum = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            maxSum = max(maxSum, sum);

            if (sum < 0)
            {
                sum = 0;
            }
        }

        return maxSum;
    }
};