/*Пройшло 20 років… Літня школа програмування та інформаційних технологій набирала
обертів. Учнів, що бажають навчитися програмувати, ставало все більше і більше. Вже
всі корпуси дитячого санаторію «Електронік» були заповнені слухачами Школи і щоб
вмістити усіх бажаючих, керівництво Школи ПІТ було змушено орендувати ще один
дитячий табір «Чайка Богуслав»… Зміна пролетіла непомітно і ось, нарешті, останній
день. У кожному з таборів усі діти вишикувались в колонну за зростом і рушили на
урочисте закриття зміни. Коли обидві колони дісталися місця проведення заходу,
з’ясувалося, що в одному з таборів учні вишикувалися за неспаданням зросту, а в
іншому – за незростанням. Для організаторів заходу потрібно було, щоб діти стояли
однією колоною, упорядкованою за зростом по неспаданню. Допоможіть їм визначити,
в якій послідовності вони повинні стояти.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void in_mas(int mas[], int N){
    for (int i = 0; i < N; i++){
        cin >> mas[i];
    }
}

void out_mas(int mas[], int N){
    for (int i = 0; i < N; i++){
        cout << mas[i] << " ";
    }
    cout << '\n';
}

int res[2000005];
int mas1[1000005];
int mas2[1000005];
int main()
{
    int N1, p1=0, N2, p2, pans = 0;
    cin >> N1; 
    in_mas(mas1, N1);
    cin >> N2; 
    in_mas(mas2, N2);
    p2=N2-1;
    while(p2>-1 || p1 < N1){
        if(p1 < N1 && p2 > -1){
            if(mas1[p1] < mas2[p2]){
                res[pans] = mas1[p1];
                p1++;
                pans++;
            }
            else
            {
                res[pans] = mas2[p2];
                p2--;
                pans++;
            } 
        }
        else if(p1>=N1)
        {
            res[pans] = mas2[p2];
            p2--;
            pans++;
        }
        else 
        {
            res[pans] = mas1[p1];
            p1++;
            pans++;
        }
    }
    out_mas(res, N1+N2);
    return 0;
}