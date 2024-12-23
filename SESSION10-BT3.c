#include<stdio.h>
int main ()
{
    int array[10]={5,12,75,36,83,13,73,14,85,34},n,i,j;
    n = 10;
    for (int i = 1 ; i < n ; i++)
    {
        int key = array[i];
        int j = i - 1;
        while ( j >= 0 && array[j]> key)
        {
            array[j+1] = array[j];
            j = j -1;
        }
        array[j+1]= key;
    }
        for ( int i = 0 ; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0 ;
}