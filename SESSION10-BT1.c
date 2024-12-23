#include<stdio.h>
int main ()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10},n,i,check=0;
    printf("hay nhap vao mot so nguyen bat ky : ");
    scanf("%d",&n);
    for ( int i = 0 ; i < 10 ; i++ )
    {
        if ( n == array[i])
        {
            printf ("ban doan dung so %d tai vi tri %d",n,i );
            check = 1;
            break;
        }
    }
    if ( !check)
    printf("so ban doan khong co trong mang");
    return 0;
}