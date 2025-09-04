#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*string one = "tatatama";
    string two = "matatata";
    
    sort(one.begin(), one.end());
    sort(two.begin(), two.end());

    if(one==two)
    return true;
    */
     string s = "anagram";
     string t = "nagaram";

     int freqTable[256] ={0};
     for(int i=0; i<s.size(); i++)
     {
        freqTable[s[i]]++;
     }
     for(int j=0;  j<t.size(); j++)
     {
        freqTable[t[i]]--;
     }
     for(int i=0; i<256; i++)
     {
        if(freqTable[i]!=0)
        return false;
     }
     return true;

}