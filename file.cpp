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
    cout<<"Addition of two numbs: "<<i+k;
    }
};
int main(){
A a;
a.add();
return 0;
}

