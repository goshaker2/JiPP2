#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
 
int randomInteger(int rmin, int rmax)
{
    return rand() % (rmax - rmin + 1) + rmin;
}
 
int main()
{
    srand(time(nullptr));
 
    int x = randomInteger(-10, 10);
    cout << x;
}