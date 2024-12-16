class Solution {
public:
    void insertionSort(vector<int>& arr, int n)
{
    for (int i = 1; i < n; ++i) {
        short key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        short inserted = 0;
        for(int i = nums1.size() - 1 ;i >= 0;--i)
        {
            if(i > m - 1)
            {
                nums1[i] = nums2[n - inserted - 1];
                inserted++;
            }
        }
        insertionSort(nums1,m+n);
        for(int i = 0;i < m+n;++i)
        {
            std::cout << nums1[i] << " ";
        }
    }
};