/*Колись давно, коли в автобусах та тролейбусах ще купували талончики,
на кожному з них було написане довжелезне число. І діти, щоб не скучати, почали
робити таке: число ділиться навпіл і знаходиться дві суми: першої та другої половини
числа. Якщо після цього перша сума дорівнювала другій, число вважалося
щасливим. Наприклад, 1203 –> 1+2=0+3 або 123051 –> 1+2+3=0+5+1.
Напиши, будь ласка, програму, яка знаходить усі щасливі числа в заданому масиві*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void in_mas(int mas[], int N){
    for (int i = 0; i < N; i++){
        cin >> mas[i];
    }
}

int sum_digit(int N)
{
    N=abs(N);
    int res=0;
    while(N!=0)
    {
        res+=N%10;
        N/=10;
    }
    return res;
}

int cnt_digit(int N)
{
    N=abs(N);
    int cnt=0;
    if (N==0) return 1;
    while(N!=0)
    {
        cnt++;
        N/=10;
    }
    return cnt;
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