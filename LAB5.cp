
//
//  main.cpp
//  LAB3
//
//  Created by Берлинский Ярослав Владленович on 11.11.2020.





#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int n,x,number,temp;
    bool k;
    cout<<"Введіть значення N: ";
    cin>>n;
    int l=0;
    cout<<"\nВведіть кількість розрядів числа: ";
    cin>>x;
    if (x<0 || n<0){
        n=abs(n);
        x=abs(x);
    }
    for (int i=pow(10,x-1); i<pow(10,x); i++)
    {
        k=false;
        number=i;
        temp=0;
        while (number!=0){
            temp=10*temp+number%10;
            number/=10;
            }
        if (temp==i && l<n)
           {
            for (int j=2; j<(i/2); j++)
               {
                if(i%j == 0){k=true; break;}
                   
               }
            if (!(k==true))
            {
               l=l+1;
               cout<<l<<") "<<"Number "<<i<<endl;
            }
           }
    }
    if (l==0){
        cout<<"Простих чисел-паліндромів не знайдено"<<endl;
    }
    return 0;
}
    
    

















/*
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int a, b;
    int fib1=1;
    int fib2=1;
    int fib3=fib1;
    cout << "Введіть перше число діапазону \n"; cin>> a;
    cout << "Введіть перше число діапазону \n"; cin>> b;
    for (int i=a; i<=b; i++){
        fib1=0;
        fib2=1;
        fib3=1;
        do{
            //printf("fib2=%d\n",fib2);
            if (i%fib2==0) {
                printf("Для числа %d число %d є дільником\n", i,fib2);
            }
            fib1=fib2;
            fib2=fib3;
            fib3=fib1+fib2;
        }
        while(fib2<=b);
    }
    
    return 0;
}
*/

