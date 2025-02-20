/*В одному картковому клубі засідають N джентльменів. Іноді азарт деяких з них
бере верх над розсудливістю, і хтось програє більше грошей, ніж у нього є з
собою. У цьому випадку той, хто програв зазвичай бере в борг у когось з
відвідувачів клубу, щоб розплатитися з партнерами по грі. Щоб почати новий
рік «з чистого аркуша», джентльмени вирішили зібратися в клубі і оплатити всі
боргові розписки, які накопичилися у них один до одного. Однак з'ясувалося,
що іноді одні і ті ж джентльмени в різні дні виступали як в ролі боржників, так і
в ролі кредиторів. Оскільки справжні джентльмени вважають дріб'язковий
підрахунок грошей нижчим за свою гідність, то розрахунками доведеться
зайнятися вам. Напишіть програму, яка із заданих розписок вирахує, скільки
всього повинен кожен джентльмен виплатити іншим (або отримати від інших).*/

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



int main()
{
    int N, cnt_debt, recipient, sender, mon;
    cin >> N >> cnt_debt;
    int gent[N]={0}; 
    for (int i = 0; i < cnt_debt; i++)
    {
        cin >> recipient >> sender >> mon;
        gent[recipient-1]=gent[recipient-1]-mon;
        gent[sender-1]=gent[sender-1]+mon;
    }
    
    out_mas(gent, N);
    return 0;
}