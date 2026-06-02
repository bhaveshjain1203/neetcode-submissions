class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n==0) return true;
        stack<char> st;

        // loop
        //if stack is empty push
        //else if stack top = [ and string is ] 
        //      or top = ( and string is ) 
        //     or top = { and string is } then pop
        // else push

        for(int i=0; i<n; i++){
            if(!st.empty() && 
                    (   st.top() =='[' && s[i] ==']'  
                     || st.top() =='{' && s[i] =='}' 
                     || st.top() =='(' && s[i] ==')' 
                        )
                ) 
                st.pop();

            else st.push(s[i]);
            
        }

        //if stack is empty return true
        return (st.empty());
        
    }
};
