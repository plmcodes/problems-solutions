#include <bits/c++.h>
int main()
{
    int s = 0 , e = 0 , csum = 0 , maxi = 0;
    while(e<n)
    { 
       csum+=v[s];
       if(e-s+1 == k)  
       {
          maxi = max(csum, maxi);
          sum-=v[s];
          s++;
       }
       e++;
    }
    return 0;
}