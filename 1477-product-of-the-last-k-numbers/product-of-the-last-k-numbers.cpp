class ProductOfNumbers {
public:
    vector<int> arr;
    ProductOfNumbers() {
        arr.push_back(1);
    }
    
    void add(int num) {
        if(num == 0){
            arr.clear();
            arr.push_back(1);
        }
        else{
            arr.push_back(arr.back() * num);
        }
    }
    
    int getProduct(int k) {
        if(k >= arr.size())return 0;

        int n = arr.size();
        return arr[n - 1] / arr[n - 1 - k];
    }
};
