/*Завдання: Напишіть програму, що за даними про послідовності назв
місяців в обох печерах знайде найбільшу кількість місяців, які могли б
мати однакові назви в обох племен, враховуючи, що рік у племен міг
починатися в різні моменти часу. Для спрощення аналізу вчені
встановили для кожної з назв місяців свій номер — натуральне число
від 1 до N.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void in_mas(int mas[], int N){
    for (int i = 0; i < N; i++){
        cin >> mas[i];
    }
}

void shift_right_mas(int mas[], int N)
{
    int temp=mas[N-1];
    for(int i=N-1; i>0; i--) mas[i]=mas[i-1];
    mas[0]=temp;
}

int mas1[300000];
int mas2[300000];
int main()
{
    int N, etanol=0, cnt=0;
    cin >> N;
    in_mas(mas1, N); 
    in_mas(mas2, N);
    for(int i=0; i<N; i++) 
    {
        if (mas1[i] == mas2[i]) etanol++;
    }


    for(int i=0; i<N-1; i++) 
    {
        shift_right_mas(mas2, N); 
        for(int j=0; j<N; j++) 
        {
            if (mas1[j] == mas2[j]) cnt++;
        }
        if (cnt > etanol) etanol=cnt;
        cnt=0;
    }
    cout << etanol;
    return 0;
}