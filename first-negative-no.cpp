#include <bits/c++.h>
int main()
{
    list<int> dq;
    vector<int> v(n);
    vector<int> ans;
    int i = 0, j = 0;
    while(j < n)
    {
        if(v[j]<0)
        {
            dq.push_back(v[j]);
        }
        if(j-i+1==k)
        {
            if(dq.size()==0)
            {
                ans.push_back(0);
            }
            if(dq.front() == v[i])
            {
                ans.push_back(dq.pop_front());
            }
            else 
            {
                ans.push_back(dq.front());
            }

            i++;
            
        }
        
        j++;
    }
    return ans;
}