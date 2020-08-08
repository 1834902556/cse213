#include<stdio.h>
int main()
{
    int i;
    int *p;
    int sum=0;
    int average=0;
    int array[20] = {1,2,3,4,5};
    int size=5;
    p = &array[0];
    for(i=0; i<size; i++)
        printf("%d ",*(p+i));
    printf("\n");
    for(i=0; i<size; i++){
        sum += *(p+i);
    }
        average = sum/size;
        printf("Average= %d",average);
    return 0;
}
