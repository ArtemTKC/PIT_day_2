/*Зловмисники варварськи вбили у ні чому не вину
плоску поверхню N цвяхів, да ще й так, що лише
шляпки залишились. Мало того, вони у своїх підлих
цілях вбили всі цвяхи у вершини опуклого
многокутника. Після цього вони… страшно
сказати… вони натягнули ниточку навколо всіх
цвяхів, так, що поверхні стало зовсім боляче! Ось
так приблизно вони це зробили: Ваша задача — визначити довжину цієї ниточки.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void in_2dmas(double mas[][120], int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> mas[i][j];
        }
    }
}

double length(double x1, double y1, double x2, double y2)
{
    double side1=0, side2=0, len=0;
    
    side1=x2-x1;
    side2=y2-y1;
    len=sqrt(pow(side1, 2) + pow(side2, 2));
    return len;
}

int main()
{
    int N;
    double rad, res, startX1, startY1, coorX1, coorY1, coorX2, coorY2;
    cin >> N >> rad;
    cin >> coorX1 >> coorY1;
    res=0;
    startX1=coorX1;
    startY1=coorY1;
    for (int i = 1; i < N; ++i)
    {
        cin >> coorX2 >> coorY2;
        res=res+length(coorX1, coorY1, coorX2, coorY2);
        coorX1=coorX2;
        coorY1=coorY2;
    }
    res=res+length(coorX1, coorY1, startX1, startY1);
    res=res + rad * 3.1415926535897 * 2;
    cout << fixed << setprecision(2) << res;
    return 0;
}