class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     nums.erase(unique(nums.begin(),nums.end()),nums.end());
      //unique is to remove duplicates from a list  in a range (first,last)
        
      //erase is to delete elemnt from a list container (frist, last) or (element position)
        return nums.size();
    }
};
