void foo ( int x, int* w)
{
    *w = x;
}
 
int main()
{
    int a = 5;
    int b = 10;
    foo ( b, &a );
 
    return 0;
}
