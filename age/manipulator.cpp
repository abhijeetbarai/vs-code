#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=3333,b=43,c=555;
    cout<<"value of a  "<<a<<endl;
    cout<<"value of a  "<<b<<endl;
    cout<<"value of a  "<<c<<endl;
    cout<<endl;
    cout<<"value of a "<<setw(4)<<a<<endl;
    cout<<"value of b "<<setw(4)<<b<<endl;
    cout<<"value of c "<<setw(4)<<c<<endl;

    return 0;
}