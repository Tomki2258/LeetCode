class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArray;

        int nums1Size = nums1.size();
        int nums2Size = nums2.size();
        
        for(int i = 0;i < nums1Size;++i)
        {
            mergedArray.push_back(nums1[i]);
        }

        for(int i = 0;i < nums2Size;++i)
        {
            mergedArray.push_back(nums2[i]);
        }

        for (int i = 1; i < mergedArray.size(); ++i) {
        int key =  mergedArray[i];
        int j = i - 1;

        while (j >= 0 &&  mergedArray[j] > key) {
             mergedArray[j + 1] =  mergedArray[j];
            j = j - 1;
        }
         mergedArray[j + 1] = key;
        }


        if(mergedArray.size() % 2 == 0)
        {
            double a = mergedArray[mergedArray.size() / 2 - 1] ;
            double b = mergedArray[mergedArray.size() / 2];

            double result = (a+b) / 2;
            return result;
        }
        else{
            return mergedArray[mergedArray.size() / 2];
        }

        return 0;
    }
};