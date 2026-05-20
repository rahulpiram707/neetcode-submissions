class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        int n = s.length();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                
                if (s[j] > s[j + 1]) {
                    std::swap(s[j], s[j + 1]);
                    
                }
            
           }
        }
        n = s.length();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                
                if (t[j] > t[j + 1]) {
                    std::swap(t[j], t[j + 1]);
                    
                }
            
           }
        }
        if(s==t)
        {
            return true;
        }
        return false;
    }
};
