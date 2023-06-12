#include<iostream>

using namespace std;

int main()
{
    void swaped(int &,int &);
    int a,b;
    cout<<"enter value of a and b\n";
    cin>>a>>b;
    cout<<"Before swapping number\n"<<a<<" & "<<b;
    swaped(a,b);
    cout<<"\nAfter swapping number\n"<<a<<" & "<<b;
    return 0;
}

void swaped(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
