// pure array ko unsorted mante hai , minimum element ka index nikal ke usko current element se swap kar dete hai  

#include <bits/stdc++.h>
int main()
{
    int n = 10;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++)
    {
        mini = i;
        for(int j = i+1 ; j < n ; j++)
        {
            if(v[j] < v[mini])
            mini = j;
        }
        swap(v[i], v[mini]);
    }
    return 0;
}