#include<iostream>

using namespace std;

class Area
{
    protected : int l,b;
    public : Area(int l1,int b1)
    {
     l=l1;
     b=b1;
     cout<<"\nArea constructor called";
    }
    ~Area()
    {
        cout<<"\nArea deconstructor called";
    }
    int area_rect()
    {
        return l*b;
    }
};

class Volume: public Area
{
    protected : int h;
    public : Volume(int l1,int b1,int h1):Area(l1,b1)
    {
     h=h1;
     cout<<"\nVolume constructor called";
    }
    ~Volume()
    {
        cout<<"\nVolume deconstructor called";
    }
    int volume_rect()
    {
        return l*b*h;
    }
};

int main()
{
    Volume ob(2,3,4);
    int k=ob.area_rect();
    cout<<"\narea is "<<k;

    k=ob.volume_rect();
    cout<<"\nvolume is "<<k;
    return 0;
}
