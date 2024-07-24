#include <iostream>
using namespace std;
int c=45;
int main(){
    int a,b,c;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"value of the sum is :"<<c<<endl;
    cout<<"the global value of c is:"<<::c;
    return 0;
}