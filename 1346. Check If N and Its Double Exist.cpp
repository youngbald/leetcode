class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
            int len = arr.size();

            for(int i =0;i<len;i++)
            {
                for(int j = i+1;j<len;j++)
                {
                    if(arr[i]==2*arr[j]||2*arr[i]==arr[j])
                         return true;

                }
            }

             return false;
          
    }
};

//O(n^2)暴力解法没啥好说的
