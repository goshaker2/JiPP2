#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int Max (int *a, int n)
{
    int max=a[0];
    for (int i = 1; i < n; i++)
        if(a[i]>max) max=a[i];
    return max;
}    
 
int main()
{
    srand((int)time(0));
    int n;
    cout << "n="; cin >> n;
 
      int *a = new int[n];
 
    for (int i = 0; i < n; i++)
    {
        a[i]=rand()%100 + 1;
        cout << a[i] << " ";
    }    
    
    cout << "\nmax=" << Max(a,n) << "\n";
    
    delete[]a;
system("pause");
return 0;
}
