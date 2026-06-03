class Solution {
public:

    bool char_inequals(char a, char b) {
        return std::tolower(static_cast<unsigned char>(a)) != 
            std::tolower(static_cast<unsigned char>(b));
    }

    

    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
    while(i < j) {
            // Skip non-alphanumeric characters
            while(i < j && !isalnum(static_cast<unsigned char>(s[i]))) {
                i++;
            }
            while(i < j && !isalnum(static_cast<unsigned char>(s[j]))) {
                j--;
            }

            // Compare characters
            if(char_inequals(s[i], s[j])) {
                return false;
            }

            i++;
            j--;
        }
        return true;
    }
};