#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{
    if (n==0)  // basecase
        return false;
    if ((n>0) && (a[n-1]!=x))       //two next cases work towards the basecase
        return search(a,n-1,x);
    if ((n>0) && (a[n-1]==x))
        return true;
}