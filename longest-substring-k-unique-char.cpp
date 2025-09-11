class Solution {
  public:
    int longestKSubstr(string s, int k){
      map<char,int> m;
      int i = 0, j = 0, len = -1;
      while(j < s.length()){
         m[s[j]]++;
         while (m.size() > k)
           {
             m[s[i]]--;
             if (m[s[i]] == 0){
               m.erase(s[i]);
             }
             i++;
           }
        if(m.size() == k) {
          len = max(len, j - i + 1);
        }
        j++;
      }
      return len;
    }
};
