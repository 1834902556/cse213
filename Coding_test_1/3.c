/* Search a value “X” (take input X from user) in the array and print
    “Found” if X found in the array otherwise print “Not Found” */

#include <stdio.h>
int main()
{
    int a[100] = {12,23,4,5,75,11,16,8,9,32};
    int i, X;
    int size = 10;
    int tag = 0;

    scanf("%d", &X);

    for (i=0; i<size; i++)
    {
        if(a[i]==X)
            tag++;
    }
    if(tag==1)
        printf("Found\n");
    else
        printf("Not Found");

    return 0;
}
