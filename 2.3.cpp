void Reverse (double *x, int n)
{    
    for (int i = 0; i < n/2; i++)    
        swap(x[i],x[n-1-i]);
}