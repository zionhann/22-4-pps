

class Solution {
public:
    bool isValid(string s) {
        const string round = "()";
        const string curly = "{}";
        const string square = "[]";
        stack<char> stack;
        
        if (s.size() & 1) {
            return false;
        }
        
        for (char& c : s) {
            if (c == '(' || c == '{' || c== '[') {
                stack.push(c);
            } else if (stack.empty()) {
                return false;
            } else {
                string brackets(1, stack.top());
                
                brackets.push_back(c);
                
                if (brackets == round || brackets == curly || brackets == square) {
                    stack.pop();
                } else {
                    return false;
                }
            }
        }
    return stack.empty();
    }
};