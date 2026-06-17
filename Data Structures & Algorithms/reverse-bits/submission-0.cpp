class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        uint32_t game =0;
        int x= 32;
        while(x){
            int temp = n&1;
            game = (game <<1 ) ;
            game = game | temp;
            n=n >> 1;
            x--;
        }
        return game;
    }
};
