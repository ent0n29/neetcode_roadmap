//LEETCODE 20
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char c:s){
            //keep track of the open parethesis with a stack
            if (c == '(' || c == '{' || c == '['){
                //push them in the stack
                stk.push(c);
            }
            else{
                if (stk.empty()){
                    return false;
                }
                if (c == ')' && stk.top() == '('){
                    stk.pop();
                }
                else if (c == '}' && stk.top() == '{'){
                    stk.pop();
                }
                else if (c == ']' && stk.top() == '['){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
        }
        return stk.empty();
    }
};