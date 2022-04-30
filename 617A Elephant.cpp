#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int x;
    cin>>x;

    int result=0,quotient,remainder;

    if(x>=5){quotient = x/5; remainder=x%5; result=result+quotient; x=remainder;}
    if(x>=4){quotient = x/4; remainder=x%4; result=result+quotient; x=remainder;}
    if(x>=3){quotient = x/3; remainder=x%3; result=result+quotient; x=remainder;}
    if(x>=2){quotient = x/2; remainder=x%2; result=result+quotient; x=remainder;}
    if(x>=1){result=result+1;}


    cout<<result<<endl;;

    return 0;
}




