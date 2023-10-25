#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,x1,x2,y;
    int Proma, Rimi , Monisha ;
    cin>>x>>x1>>x2;
    y=((x-(2*x1)-(x2))/3);
    Rimi=y;
    Proma=y+x1;
    Monisha=y+x1+x2;
    cout<<"Proma "<<Proma<<", Rimi "<<Rimi<<", Monisha "<<Monisha<<"\n";
    return 0;
}


