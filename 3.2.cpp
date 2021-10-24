#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
    srand((int)time(0));
    int n;
    cout << "n="; cin >> n;
 
      int *a = new int[n];
 
    for (int* pa = a; pa < a+n; pa++) 
    {
       *pa=rand()%19 - 9;       
       cout << *pa << "  ";
    }
    
    cout << "\nPositive elements: \n";
    for (int* pa = a; pa < a+n; pa++)       
       if(*pa>0) cout << *pa << "  ";
    cout << "\n";
    
    delete[]a;
system("pause");
return 0;
}
