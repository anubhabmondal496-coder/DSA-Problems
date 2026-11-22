class Solution {
public:
    bool checkString(string s) {
        int i = 0 ,j = 0;
        while(i < s.length()){
            if(s[i] == 'b'){
                j = i;
                break;
            }
            i++;
        }
        while(j < s.length()){
            if(s[j] == 'a' && j > i){
                return false;
            }
            j++;
        }
        return true;
    }
};