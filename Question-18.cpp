#include <iostream>
using namespace std;
int main()
{
        int a,m;
        cout<<"enter a number"<<endl;
        cin>>a;
        for(int i=1;i<=100;i++){
        m=a*i;
        if(m<=100){        
        cout<<i<<"×"<<a<<"="<<m<<"  ";
        }else{
          break;
        }
        }        
    return 0;
}
