#include <iostream>
using namespace std;
struct car{
    char brand[255];
    char model[255];
    int distance=0;
    void setinfo(){
        cin.getline(brand,255);
        cin.getline(model,255);
    }
    void drive(int d){
        distance+=d;
    }
    void showdata(){
        cout<<"Brand:"<<brand<<endl;
        cout<<"Model::"<<model<<endl;
        cout<<"Distance driver:"<<distance<<"Km";
    }
};

int main(){
    car car;
    car.setinfo();
    int d;
    cin>>d;
    car.drive(d);
    return 0;
}
