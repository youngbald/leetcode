// int this problem we need to find the next smallest combination which is bigger than current
// for example
// [1,2,3] ==> [1,3,2]

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      
//       首先先从数组的最后一位数往前找到[i]<[i-1]的数字
//       然后从那个位置开始进行交换
//       比如说1，2，3 如果倒数第二位数的2比3大，这时候我们就可以进行交换
//       交换之后数字变成1，3，2之后就不需要进行交换了，因为我们满足了他成为比当前数字大的最小数字
//       i=2, k=2
        int i = nums.size()-1, k = nums.size()-1;
//        用1，2，3作为例子，我们使用loop找到i停留的位置之后我们记录得到i=1
        while(i>0&& nums[i-1]>=nums[i]){
            i--;
        }
//      当前j =1,k=2 j<k满足，进行第一次交换，然后k交换之后变成了1  
        for(int j = i;j<k;j++, k--){
            swap(nums[j],nums[k]);
        }
//      如果i还是大于0，说明整个数组还没有被走完，i需要再往前走
//      此时i>0 满足，k =1--==>0
//       k=0,i=1
//       数字在0的位置小于1的位置的时候，k可以继续右移进行左边跟右边的数的比较
//       最后一直交换到所有数字都满足条件
       if(i>0){
           k = i--;
           while(nums[k]<=nums[i]){
               k++;
           }
           swap(nums[i],nums[k]);
       }
    }
    
 
};
