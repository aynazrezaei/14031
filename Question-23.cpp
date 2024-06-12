#include <iostream>
using namespace std;
int main()
{
    float gread;
    cout<<"please enter greade:"<<endl;
    cin>>gread;
    if(gread>=17&&gread<=20){
    cout<<"A level";
    }
    else if(gread>=14&&gread<17){
    cout<<"B level";
    }
    else if(gread<14&&gread>=10){
    cout<<"C level";

    }
    else if(gread<10&&gread>=0){
    cout<<"D level";
    }
    else{
    cout<<"mashrot!";    
    }
    return 0;
}
