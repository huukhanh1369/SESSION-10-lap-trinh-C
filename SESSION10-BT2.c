#include<stdio.h>
int main ()
{
    int array[10]={5,12,75,36,83,13,73,14,85,34},n,i,j,temp;
    n = 10;
    for (int i = 0; i < n-1 ; i++ )
    {
        for( int j = 0; j < n - i - 1 ; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp; 
            }
        }
    }
    for ( int i = 0 ; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0 ;
}