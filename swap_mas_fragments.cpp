/*Дано масив, що містить N цілих чисел (1≤𝑁 ≤106) і дано індекси двох відрізків цього масиву
left1/right1 та left2/right2.
Завдання: Поміняти місцями вказані фрагменти, не використовуючи допоміжного масиву. */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void in_mas(int mas[], int N){
    for (int i = 1; i <= N; i++){
        cin >> mas[i];
    }
}

void out_mas(int mas[], int N){
    for (int i = 1; i <= N; i++){
        cout << mas[i] << " ";
    }
    cout << '\n';
}

void reverse_mas(int mas[], int left, int right)
{
    if(left>right)swap(left, right);

    for (int i = left, j=right; i <= (left+right)/2; ++i, --j)
    {
        swap(mas[i], mas[j]);
    }
}


int mas[1000010];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, left1, right1, left2, right2;
    cin >> N;
    in_mas(mas, N);
    cin >> left1 >> right1 >> left2 >> right2;

    reverse_mas(mas, left1, right1);
    reverse_mas(mas, left2, right2);
    if (right1+1 != left2 )reverse_mas(mas, right1+1, left2-1);
    reverse_mas(mas, left1, right2);
    out_mas(mas, N);
    return 0;
}