#include<stdio.h>
void array_function();
int main()
{
    int a[100];
    int i;
    int size;
    array_function();
    return 0;
}
void array_function(){
    int a[100];
    int i, j;
    for(i = 0; i < 100; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] == 0){
            printf("OverFlow\n");
            break;
        }
    }
    for(j = 0; j < i; j++){
        printf("%d, ",a[j]);
    }
}
