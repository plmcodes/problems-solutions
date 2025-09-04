// we consider first element as  sorted part and other elements unsorted and then do their adjacent swapping

#include <bits/stdc++.h>
int main()
{
    int n = 10, j = 0;
    vector<int> v(n);
    for(int i = 1; i < n ; i++)
    {
        j = i;
        while(j>=1 && v[j]<v[j-1])
        {
            swap(v[j], v[j-1]);
            j--;
        }
    }
    return 0;
}