class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        if(purchaseAmount % 10 >= 5){
            purchaseAmount += (5 - purchaseAmount % 5);
        }else{
            purchaseAmount -= purchaseAmount % 5; 
        }
        return 100 - purchaseAmount;
    }
};