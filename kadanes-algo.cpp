#include <std/c++.h>
int main()
{
    int n = 5, maxi = 0;
    vector<int> v(n);
    for(int i = 0; i < n ; i++)
    {
        csum+=v[i];
        maxi= maxi(csum, maxi);
        if(csum < 0)
        {
            csum = 0;
        }
    }
    return 0;
}