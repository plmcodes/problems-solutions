// after every pass the greatest element bubbles up at the end due to adjacent swapping

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    vector<int> v(n,0);
    for(int i = n-1 ; i>=0; i--)
    {
        for(int j = 0 ; j < i; j++)
        {
            if(v[j]<v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    return 0;
}