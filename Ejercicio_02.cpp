#include <iostream>
using namespace std;
class GatoSimple
{
private:
    int suEdad;
public:
    GatoSimple();
    ~GatoSimple();
};
GatoSimple::GatoSimple()
{
    cout<<"Se llamo al constructor"<<endl;
    suEdad=1;
}
GatoSimple::~GatoSimple()
{
    cout<<"Se llamo al constructor"<<endl;
}
int main()
{
    cout<<"GatoSimple Pelusa..."<<endl;
    GatoSimple Pelusa;
    cout<<"GatoSimple *ApFelix= new GatoSimple"<<endl;
    GatoSimple*ApFelix=new GatoSimple;
    cout<<"delete ApFelix...."<<endl;
    delete ApFelix;
    cout<<"Saliendo, observe como se va Pelusa..."<<endl;
    return 0;
}
