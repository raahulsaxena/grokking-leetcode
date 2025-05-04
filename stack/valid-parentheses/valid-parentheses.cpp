class Solution {
    public:
        bool isValid(string s) {
    
            stack<char> stack;
    
            
            for(int i = 0; i < s.size(); i++){
    
                char curr_char = s[i];
    
                if(curr_char == '(' || curr_char == '[' || curr_char == '{') stack.push(curr_char);
    
                else{
    
                    if(stack.empty()) return false;
    
                    char stack_top = stack.top();
    
                    if(curr_char == ']' && stack_top == '['){
                        stack.pop();
                    }
                    else if(curr_char == ')' && stack_top == '('){
                        stack.pop();
                    }
    
                    else if(curr_char == '}' && stack_top == '{'){
                        stack.pop();
                    }
    
                    else return false;
    
                }
    
    
            }
    
            return (stack.empty() ? true: false);
            
        }
    };