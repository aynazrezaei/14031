#include <iostream>
using namespace std;
int main()
{
        int a,b,c;
        cout<<"The amount of fuel in the car"<<endl;//مقدار سوخت در ماشین
        cin>>a;
        cout<<"Fuel consumption in your car at 100 km"<<endl;//مصرف سوخت ماشین شما در100کیلومتر
        cin>>b;
        c=(a/b)*100;
        if(c==0){
        cout<<"please refill tank"<<endl;
        }
        else{
        cout<<"you can go"<<c<<"km another";
        }
        return 0;

}
