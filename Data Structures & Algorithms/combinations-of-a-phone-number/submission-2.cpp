class Solution {
public: 
    vector<string>res;
    vector<string> digitTochar = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
        return res;
        backtrack(0,"",digits);
        return res;
    }

    void backtrack(int i , string curstring , string &digits){
        if(curstring.size() == digits.size())
        {
            res.push_back(curstring);
            return ;
        }

        string chars = digitTochar[digits[i] - '0'];

        for(char c : chars)
        {
            backtrack(i+1,curstring + c , digits);
        }
    }
};
