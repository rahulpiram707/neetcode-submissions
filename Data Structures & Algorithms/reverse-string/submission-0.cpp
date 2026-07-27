class Solution {
public:
    void reverseString(vector<char>& s) {
        std::vector<char> r;
        for(int i = s.size()-1; i >=0; i--)
        {
            r.push_back(s[i]);
        }
        s = r;
       

    }
};