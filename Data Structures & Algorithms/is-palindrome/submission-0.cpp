#include <cctype> 
class Solution {
public:
    bool isPalindrome(string s) {
       string final;
       for(int i = 0; i < s.length(); i ++)
       {
            if(std::isalnum(s[i]))
            {
                if(s[i] >= 'A' && s[i] <= 'Z')
                {
                    final.push_back(s[i] + ' ');
                    
                }
                else
                {
                    final.push_back(s[i]);
                }
                    
            }
       }
       int len = final.length();
       std::cout << final ;
       for(int i = 0; i < final.length(); i ++)
       {
            if(final[i] != final[len-1-i])
            {
                return false;
            }
       }
       return true;
    }
};