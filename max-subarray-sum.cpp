#include <std/cpp.h>
int main()
{
    int n = 10;
    int sum,maxi=0;
    vector<int> v(n);
    for(int s = 0; s < n ; s++)
    {
        sum = 0;
        for(int e = s; e < n ; e++)
        {
            sum+=v[e];
            maxi = max(maxi,sum);
        }
    }
    return 0;
}