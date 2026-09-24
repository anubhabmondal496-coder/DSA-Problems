class Solution {
public:
    int sum_of_digits(int x){
        int sum = 0;
        while(x > 0){
            int rem = x % 10;
            x /= 10;
            sum += rem;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i = 0;i < nums.size();i++){
            int num = nums[i];
            if(sum_of_digits(nums[i]) == i){
                return i;
            }
        }
        return -1;
    }
};