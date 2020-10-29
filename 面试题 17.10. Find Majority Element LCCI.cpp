class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        int count = 0;
        //先从大到小排序
        //如果排序后这个数一定在中间， 因为超过一般的元素成为主要元素
        //我们从中间开始算起，
        sort(nums.begin(),nums.end());
        int a = nums[len/2];
       
        for(int i = 0;i<len;i++)
        {
            if(nums[i]==a) count++;
            //count超过数组一半就可以直接返回了
            if(count>len/2) return nums[i];
        }

         return -1;
        
        
    }
};
