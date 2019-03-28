#include<iostream>
using namespace std;
class A{
int i;
int k;
public:
    void add(){
    cout<<"Enter two num to add: ";
    cin>>i>>k;
    cout<<endl;
    cout<<"Addition of two numbs: "<<i+k<<endl;
    }
    void sub(){
    cout<<"Enter two numbs to sub: ";
    cin>>i>>k;
    cout<<endl;
    cout<<"The subtraction two numbs: "<<i-k;
    }
    void mul(){
    cout<<"Enter two numb to multiply ";
    cin>>i>>k;
    cout<<endl;
    cout<<"The multiplication of two numbs: "<<i*k<<endl;

    }
};
int main(){
A a;
a.add();
a.sub();
a.mul();
return 0;
}

