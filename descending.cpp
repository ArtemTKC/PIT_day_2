/* */


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool descending(int N)
{
    int dig, pastdig;
    N=abs(N);
    pastdig = N % 10;
    N = N / 10;
    while (N != 0)
    {
        dig = N % 10;
        if (dig<pastdig) return false;

        N = N / 10;
        pastdig=dig;
    }
    return true;
}


int main()
{
    int N, num, found;
    cin >> N; 
    found=false;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        if (descending(num))
        {
            cout << num << " ";
            found=true;
        }
    }
    if (!found) cout << "-1";
    //cout << descending(N);
    return 0;
}