class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n==0) return true;
        stack<char> st;
        std::unordered_map<char, char> closeToOpen = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        // loop
        //if stack is empty push
        //else if stack top = [ and string is ] 
        //      or top = ( and string is ) 
        //     or top = { and string is } then pop
        // else push

        for(char c: s){
            if(!st.empty() && st.top() == closeToOpen[c]) 
                st.pop();
            else st.push(c);
        
        }

        //if stack is empty return true
        return (st.empty());
        
    }
};
