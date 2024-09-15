/* */


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void in_mas(int mas[], int N){
    for (int i = 0; i < N; i++){
        cin >> mas[i];
    }
}


int cnt_neg_in_row(int mas[], int N)
{
    int etalon, cnt;
    etalon=0;
    cnt=0;
    for (int i = 0; i < N; i++)
    {
        if (mas[i]<0) 
        {
            cnt++;
            if (cnt > etalon) etalon = cnt;
        }
        if (mas[i]>0) cnt=0;
    }
    return etalon;
}


int main()
{
    int N, cnt;
    cin >> N;
    int mas[N]; 
    in_mas(mas, N);
    cnt=cnt_neg_in_row(mas, N);
    cout << cnt << "\n";
    return 0;
}