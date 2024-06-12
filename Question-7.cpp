#include <iostream>
#define pi 3.14
using namespace std;
float Ayni(int r)
{
    return pi*r*r;
}
float aynaz(int o)
{
    return pi*o*2;
}
int main()
{
    int r;
    cout<<"enter Radius:";//Radius(شعاع)
    cin>>r;
    cout<<"Area of circle is:"<<Ayni(r)<<endl;//Area(مساحت)

    cout<<"perimeter of circle is :"<<aynaz(r);//perimeter(محیط)
    return 0;
}
