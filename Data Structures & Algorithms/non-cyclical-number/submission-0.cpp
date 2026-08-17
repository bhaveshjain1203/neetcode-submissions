class Solution {
public:

    bool isHappy(int n){
        set<int> st;
        return isHappyHelper(n, st);

    }

    

    bool isHappyHelper(int n, set<int> &st) {
        int sum =0;

        while (n){
            sum += ((n%10) * (n%10));
            n=n/10;
        }

        if(sum == 1) return true;
        if(st.find(sum)!=st.end()) return false;
        st.insert(sum);
        return (isHappyHelper(sum, st));
        
    }
};
