class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0,i = 0,j = 0;
        int m = arr2.size();
        int n = arr1.size();
        for(int i = 0;i < n;i++){
            bool isvalid = false;
            for(int j = 0;j< m; j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    isvalid = true;
                    break;
                }
            }
            if(!isvalid){
                count++;
            }
        }
        return count;
    }
};