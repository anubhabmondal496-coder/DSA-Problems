class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int i = 0, j = 0, k = 0;
        int merged[m+n];
        while (i < m && j < n)
        {
            if (arr1[i] > arr2[j])
            {
                merged[k] = arr2[j];
                j++;
            }
            else
            {
                merged[k] = arr1[i];
                i++;
            }
            k++;
        }
        while (i < m)
        {
            merged[k] = arr1[i];
            i++;
            k++;
        }
        while (j < n)
        {
            merged[k] = arr2[j];
            j++;
            k++;
        }
        for (int x = 0; x < m + n; x++) {
            arr1[x] = merged[x];
        }
    }
};