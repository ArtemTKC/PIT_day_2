/*Учні синьої паралелі нарешті вивчили тему «Лінійні масиви». Одними з найперших задач по
обробці масивів є знаходження суми усіх елементів масиву та пошук його мінімального (або
максимального) елементів. Крім того, Денис вирішив ще навчити дітей замінювати кожен
елемент масиву на різницю між знайденою сумою та поточним значенням цього елементу. Щоб
закріпити отриманні знання, він вирішив змусити учнів багаторазово виконувати вказані
операції. Але тепер у нього виникло питання: як перевірити, чи правильно виконані усі
перетворення масиву?
Отже, вам потрібно написати програму, яка K разів виконає перетворення масиву таким чином:
1) знаходить суму усіх елементів масиву;
2) замінює кожен елемент масиву на різницю між отриманою сумою та поточним значенням
цього елементу.
А потім обчислить різницю між максимальним та мінімальним значенням новоутвореного
масиву.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void in_mas(long long mas[], long long N){
    for (long long i = 0; i < N; i++){
        cin >> mas[i];
    }
}

long long max_index(long long mas[], long long N)
{
    long long etalon=0;
    for (long long i = 1; i < N; i++)
    {
        if (mas[etalon]<=mas[i]) etalon=i;
    }
    return etalon;
}


long long min_index(long long mas[], long long N)
{
    long long etalon=0;
    for (long long i = 1; i < N; i++)
    {
        if (mas[etalon]>=mas[i]) etalon=i;
    }
    return etalon;
}


long long mas[50000];
int main()
{
    freopen("confuse.dat", "r", stdin);
    freopen("confuse.sol", "w", stdout);
    long long N, num_of_transform, res;
    cin >> N >> num_of_transform; 
    in_mas(mas, N);
    
    res=mas[max_index(mas, N)]-mas[min_index(mas, N)];
    cout << res;
    return 0;
}