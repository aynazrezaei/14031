#include <iostream>
using namespace std;
struct Food{
                char name[15];
                int price;
};
Food  foods[3];
food[0].name="kabab";
food[0].price=520000;
food[1].name="pirashki";
food[1].price=200000;
food[2].name="hamber";
food[2].price=1520000;
const float vat=0.1;
struct Drink{
                char name[15];
                int price;
};
Drink drinks[3];
drinks[0].name="water";
drinks[0].price=75000;
drinks[1].name="coca";
drinks[1].price=150000;
drinks[2].name="limonad";
drinks[2].price=170000;
const float vat=0.1;
int main(){
            
            cout<<"food menu:"<<endl;
            for(inti=0; i<3;i++){
                                    cout<<"code:"<<i<<endl;
                                    cout<<"name:"<<food[i].name<<endl;
            }
           return 0; 
}
