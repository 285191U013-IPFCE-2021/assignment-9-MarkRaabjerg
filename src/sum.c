#include "sum.h"

int sum(int a[], int n)
{
    if (n==0){
    return 0;   //basecase
    }
    else{
    return a[n-1]+sum(a,n-1);   //work towards basecase
    }

}