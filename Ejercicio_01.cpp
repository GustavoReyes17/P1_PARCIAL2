#include <iostream>
using namespace std;
int main ()
{
    int VariableLocal=5;
    int *ApLocal=&VariableLocal;
    int *ApHeap=new int;
    *ApHeap=7;
    cout<<"Variable Local: "<<VariableLocal<<endl;
    cout<<"*ApLocal: "<<*ApLocal<<endl;
    cout<<"*ApHeap: "<<*ApHeap<<endl;
    delete ApHeap;
    ApHeap= new int;
    *ApHeap=9;
    cout<<"*ApHeap: "<<*ApHeap<<endl;
    delete ApHeap;
    return 0;
}
