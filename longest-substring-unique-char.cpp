class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int>m;
        int i=0, j=0;
        int len=0;
        while(j<s.size())
        {
            m[s[j]]++;

            if(m.size() < j-i+1)
            {
                m[s[i]]--;
                if(m[s[i]] == 0)
                {
                    m.erase(s[i]);
                }
                i++;
            }
            if(m.size() == j-i+1)
            {
                len=max(len, j-i+1);
            }
            j++;
        }
        return len;
}
};
