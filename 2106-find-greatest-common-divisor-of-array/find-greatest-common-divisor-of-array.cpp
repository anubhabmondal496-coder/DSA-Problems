class Solution {
public:
    int findGCD(vector<int>& arr) {
        int smallest = arr[0];
        int largest = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < smallest)
                smallest = arr[i];

            if (arr[i] > largest)
                largest = arr[i];
        }
        while(smallest > 0 || largest > 0){
            if (largest == smallest){
                return smallest;
            }
            if (smallest < largest){
                largest = largest % smallest;
            }

            else if (smallest > largest){
                smallest = smallest % largest;
            }

            if(largest == 0 || smallest == 0){
                break;
            }
            
        }
        int gcd = max(smallest,largest);
        return gcd;
    }
};