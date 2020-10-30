class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //正数跟最小负数优先
        int sums= 0 ;
        //sums 初始化
        int ans = nums[0];
        //设置ans为第一个遍历的值，用来后面loop做比较
        //我们再遍历numbs ，如果当前sums大于0的话就可以保留加上当前的num，小于0的话接着遍历
        //然后ans用来比较当前的被相加的sums和我们前一个保留的ans数字，保留其中大的一个
        
        for(int num: nums)
        {
            if(sums>0)
            {
                sums+= num;
            }
            else{
                sums = num;
            }

            ans = max(sums,ans);

        }

        return ans;
    }
};
