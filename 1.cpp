#include<iostream>
using namespace std;

class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void bluData(int a1,int b1);
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    };
};

void employee :: bluData (int a1, int b1){
    a = a1;
    b = b1;
}

int main(){
      employee anshi;
      //anshi.c = 4;
      //c can't be accessed directly since it is a private element
      //private element can be accessed through a function 
      anshi.d = 5;
      anshi.e = 6;
      anshi.bluData(1,2);
      anshi.getData();
      return 0;
}