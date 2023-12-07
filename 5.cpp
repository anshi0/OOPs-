#include <iostream>
using namespace std;

int main() {
int a = 32, *ptr = &a;
    char ch = 'A', &cho = ch;
    cout<<"cho value \n"<<cho<<"\n ptr value \n"<<*ptr;
cho =cho+ a;
*ptr =*ptr+ ch;
cout<<"\n cho value \n"<<cho<<"\n ptr value \n"<<*ptr;
cout <<"\n"<< a << "," << ch << endl;
return 0;
}