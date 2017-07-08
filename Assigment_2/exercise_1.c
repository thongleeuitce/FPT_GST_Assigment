#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int i = 0;
float avg = 0;
int tmp = 0;
int *array;
int a, b;

void main()
{
    array = (int*)malloc(10000*sizeof(int));
    srand(time(NULL));
    for(i=0;i<10000;i++)
    {
        *(array+i)= rand()%10000;
    }
    printf("==========================\n");
    for(i=0;i<10000;i++)
    {
        printf("%d ", (array+1));
    }
}
