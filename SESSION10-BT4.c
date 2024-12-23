#include<stdio.h>
int main ()
{
    int array[10]={5,12,75,36,83,13,73,14,85,34},n,i,j,temp;
    n=10;
for (int i = 0; i < n-1; i++)
{
    int min_idx = i; 
    for (int j = i + 1; j < n; j++) 
    { 
        if (array[j] < array[min_idx]) 
        { 
            min_idx = j; 
        } 
    } 
    int temp = array[min_idx]; 
    array[min_idx] = array[i]; 
    array[i] = temp; 
}
    for ( int i = 0 ; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}