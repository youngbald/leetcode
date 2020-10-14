class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     nums.erase(unique(nums.begin(),nums.end()),nums.end());
      //unique is to remove duplicates from a list  in a range (first,last)
        
      //erase is to delete elemnt from a list container (frist, last) or (element position)
        return nums.size();
    }
};


///or 
int removeElement(vector<int>& nums, int val) {
    return std::distance(nums.begin(), std::remove(nums.begin(), nums.end(), val));
    
    //distance is getting the numbers between these two element, since the val number has been removed from the begin and end, it will return the exact number
}
