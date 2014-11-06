#include <iostream>
using namespace std;

int main()
/*{
    int a, isPrime = 0;
    cin>>a;

    for (int i=2; i<a; i++)
        if (a%i==0)
            isPrime = 1;


    if(isPrime == 1)
        cout<<"ne e prosto"<<endl;
    if(isPrime == 0)
        cout<<"prosto";

    cin >> a;
}*/

{
    int a=2356;
    cin>>a;
    int b,c,d,e;
    b=a%10;
    c=(a%100)/10;
    d=(a%1000)/100;
    e=(a/1000);
    cout<<"b= "<<b<<endl<<"c= "<<c<<endl<<"d= "<<d<<endl<<"e= "<<e<<endl;
}
