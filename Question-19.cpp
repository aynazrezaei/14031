#include <iostream>
using namespace std;
int main()
{
        int a1,a2,a3,n=0;
        float av;
        cout<<"please enter 3 integer"<<endl;
        cin>>a1>>a2>>a3;
        av=(a1+a2+a3)/3.0;
        if (a1<0){
         n++;
  }
  if (a2<0){
         n++;
  }
  if (a3<0){
         n++;
  }
        cout<<n<<" of the numbers are negative."<<endl; 
        cout<<3-n<<" of the numbers are pasetive."<<endl;
        cout<<"avarage :"<<av;
        return 0;
}
