#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int i = 0;
float avg = 0;
int tmp = 0;
int array[20];
int a, b;

void main()
{
    srand(time(NULL));
    for(i=0;i<20;i++)
    {
        array[i] = rand()%100;
        printf("Input i = %d", array[i]);
        printf("\n");
    }
    printf("==========================\n");
    for(i=0;i<20;i++)
    {
        printf("%d ", array[i]);
        tmp = tmp + array[i];
    }
    printf("==========================\n");
    avg = (float)tmp / 20;
    printf("average = %f", avg);
    printf("==========================\n");
    printf("varible < average is: \n");
    for(i=0;i<20;i++)
    {
            if((float)array[i] < avg)
                printf("%d ", array[i]);
    }
}
