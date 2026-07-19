class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int zeroes = 0;
        int ones = 0;
        for(char i: s){
            if(i == '0') zeroes ++;
            else ones ++;
        }
        int leftzero =0;

        int maxScore = 0;
        for(int x=0;x<s.size()-1;x++){

            if(s[x]== '0') leftzero ++;
            else ones --;
            int score = leftzero + ones;
            maxScore = max(maxScore, score);
        }



        return maxScore;
        
    }
};