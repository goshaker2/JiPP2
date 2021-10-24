#include <iostream>
#include <cstdlib>
 
using namespace std;
 
double zwieksz_kilka(double *dl, double *wys)
{
    return (*dl+*wys)/2.0;
}
 
int main()
{
    
    double dlugosc = 125.;
    double wysokosc = 300.;
   
    
    double *wsk_dlugosc = &dlugosc;
    double *wsk_wysokosc = &wysokosc;
  
    
    cout<<zwieksz_kilka(wsk_dlugosc, wsk_wysokosc);
    
    system("pause >nul");
    return 0;
}
