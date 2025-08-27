/******************************************************************************

    Program: Stats Calculator (Sum, Min, Max, Average)
    Author: https://github.com/ilyasazer
    Description:
        This program dynamically takes 'n' integer inputs from the user,
        calculates the sum, minimum, maximum, and average,
        and prints the results.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = 0;
    int sum = 0;
    int max;
    int min ;
    int average = 0;
    printf("Enter how many numbers: ");
    scanf("%d",&size);
    int *ptr = malloc(sizeof(int) * size);
    if (ptr == NULL)
    {
        printf("Error Memory Allocation!\n");
        return 1;
    }
    for(int i = 0 ;i < size ;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&ptr[i]);
        if (i == 0)
            max = min = ptr[i];
        sum = sum + ptr[i];
        max = max > ptr[i] ? max : ptr[i];
        min = min < ptr[i] ? min : ptr[i];
        
    }
    average = sum / size;
    
    printf("The numbers are: ");
    for (int j = 0; j < size ; j++)
    {
        printf("%d ",ptr[j]);
    }
    printf("\nThe total sum is: %d\n",sum);
    printf("The max is : %d\n",max);
    printf("The min is : %d\n",min);
    printf("The average is : %d\n",average);
    
    free(ptr);
    return 0;
}
