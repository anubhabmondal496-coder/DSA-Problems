class Solution {
private:
    vector<string> elements_maker(string digits){
        vector<string> elements;
        for(int i = 0;i < digits.length();i++){
            switch(digits[i]){
                case '2':
                    elements.push_back("abc");
                    break;
                case '3':
                    elements.push_back("def");
                    break;
                case '4':
                    elements.push_back("ghi");
                    break;
                case '5':
                    elements.push_back("jkl");
                    break;
                case '6':
                    elements.push_back("mno");
                    break;
                case '7':
                    elements.push_back("pqrs");
                    break;
                case '8':
                    elements.push_back("tuv");
                    break;
                case '9':
                    elements.push_back("wxyz");
                    break;
            }
        }
        return elements;
    }

    void generate(vector<string>& elements,int index,string& curr,vector<string>& ans){
        if(index == elements.size()){
            ans.push_back(curr);
            return;
        }
        for(char ch:elements[index]){
            curr += ch;
            generate(elements,index + 1,curr,ans);
            curr.pop_back();
        }
    }
    
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.empty()) {
            return ans;
        }

        vector<string> elements = elements_maker(digits);
        string curr = "";

        generate(elements, 0, curr, ans);

        return ans;
    }
};