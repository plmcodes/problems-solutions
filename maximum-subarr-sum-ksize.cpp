#include <bits/stdc++.h>
int main()
{
    int n = 10, sum = 0,maxi = 0, k = 3;
    vector<int> v(n);
    for(int s = 0 ; s < n ; s++)
    {   sum = 0;
        for(int e = i ; e < n ; e++)
        {
              sum += v[e];
              if(e-s+1==k)
              {
                maxi = max(sum, maxi);
              }
        }
    }
    return 0;
}