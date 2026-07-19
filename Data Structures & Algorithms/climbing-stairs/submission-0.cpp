// class Solution {
// public:

//     int game(int n,int i){
//         if(i>=n) return i==n;
//         if(cache[i]!=-1) return cache[i];
//         return cache[i]= game(n,i+1)+game(n,i+2);

//     }
//     vector<int> cache;
//     int climbStairs(int n) {
//         cache.resize(n,-1);
//         return game(n,0);
        
//     }
// };
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }
        vector<int> dp(n + 1);
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};