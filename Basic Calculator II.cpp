// Given a string s which represents an expression, evaluate this expression and return its value. 

// The integer division should truncate toward zero.

// You may assume that the given expression is always valid. All intermediate results will be in the range of [-231, 231 - 1].

// Note: You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as eval().

 

// Example 1:

// Input: s = "3+2*2"
// Output: 7
// Example 2:

// Input: s = " 3/2 "
// Output: 1
// Example 3:

// Input: s = " 3+5 / 2 "
// Output: 5
 

// Constraints:

// 1 <= s.length <= 3 * 105
// s consists of integers and operators ('+', '-', '*', '/') separated by some number of spaces.
// s represents a valid expression.
// All the integers in the expression are non-negative integers in the range [0, 231 - 1].
// The answer is guaranteed to fit in a 32-bit integer.




class Solution {
public:
    stack<int> opr;
    stack<int> op;
    int precedence(char ch){
        if(ch== '+' || ch=='-')
            return 1;
        else if(ch=='*' || ch== '/')
            return 2;
        else
            return 0;
    }
    int doProcess(){
        int a = op.top();
        op.pop();
        int b = op.top();
        op.pop();
        char ch = opr.top();
        opr.pop();
        if(ch == '+')
            return b+a;
        else if(ch == '-')
            return b-a;
        else if(ch == '*')
            return b*a;
        else
            return b/a;
    }
    int calculate(string s) {
        for(int i=0;i<s.length(); i++){
            if(s[i]==' ')
                continue;
            else if(isdigit(s[i])){
                int num = 0;
                while(i < s.length() && isdigit(s[i])){
                    num = num*10 + (s[i] - '0');
                    i++;
                }
                i--;
                op.push(num);
            }
            else{
                while(!opr.empty() && precedence(s[i])<=precedence(opr.top())){
                    int res = doProcess();
                    op.push(res);
                }
                opr.push(s[i]);
            }


        }
        while(!opr.empty()){
            int res = doProcess();
            op.push(res);
        }
        return op.top();
    }
};
