#include <iostream>
using namespace std;
 
int area(int a)
{
    return a * a;
}
 
int area(int a, int b)
{
    return a * b;
}
 
double area(double a)
{
    return a * a;
}
 
double area(double a, double b)
{
    return a * b;
}
 
int main()
{
    cout << area(3) << endl;
    cout << area(4, 5) << endl;
    cout << area(6.25) << endl;
    cout << area(7.34, 8.56);
}
