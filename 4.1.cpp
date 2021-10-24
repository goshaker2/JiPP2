#include <iostream>
using namespace std;
 
int main()
{
    int a, b;
    cout << "Enter natural a, b:\n";  
    cin >> a >> b;
    
    try 
    {
        if (b==0) 
           throw "cannot be divided by zero\n";
           
        double res=(double)a/b;   
       
        cout << "result=" << res << "\n";           
    }
    catch(const char *msg)
    {
      cout << msg << endl;  
    }
    
system("pause");
return 0;
}
