#include <stdio.h>
#include <stdlib.h>


int count_repeated(int arr[] , int);

int main()
{
    int arr[8] = {2,4,2,5,6,4,5,2};

    count_repeated(arr,8);

    return 0;
}
int count_repeated(int arr[] , int size)
{
    int i = 0 , j = 0 , flag = -1 , x = arr[j]  ;


    for( i = 0 ; i < size + 1 ; i++)
    {
            if(x - arr[i] == 0 )
            {
               flag++;
               arr[i] = 0;
            }
           else if (i == size)
           {
            if(flag != 0 && x != 0)
            {
                printf("Number = %d , Repeated = %d \n" , x , flag);
            }
               j++;
               i = 0;
               flag = -1;
               x = arr[j];
           }
           else if( j == size)
            break;
        }
    }

