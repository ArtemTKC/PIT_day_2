/*Дано масив, що містить N цілих чисел (1 ≤ 𝑁 ≤ 104). Знайти у ньому останнє просте число.
Простим називається число, що має рівно два дільники: 1 та саме число, наприклад, 2, 3, 31
тощо.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void in_mas(int mas[], int N){
    for (int i = 0; i < N; i++){
        cin >> mas[i];
    }
}

bool happy(int N)
{
    int cnt=cnt_digit(N);
    if(cnt%2!=0) return false;
    int pow10=pow(10, cnt/2);
    int left=N/pow10;
    int right=N%pow10;
    if(sum_digit(left)==sum_digit(right)) return true;
    return false;
}


int mas[300000];
int main()
{
    int N, i;
    cin >> N; 
    in_mas(mas, N);
    i = 0;
    while(i<N && (!happy(mas[i]))) i++;
    if (i==N) cout << "-1";
    else cout << mas[i] << ' ' << i+1;
    return 0;
}