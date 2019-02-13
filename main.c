/*#include <stdio.h>
#include <stdlib.h>
//#include "cal_functions.h"

int main()
{
    int a[100];
    for(int i=0;i<100;++i)
    {
        a[i]=rand()%2;
        printf("%d",a[i]);
    }
    printf("\n");
    for(int i=0;i<99;++i)
    {
        if((a[i]==0)&(a[i+1]==0))
            printf("Count:%d || Sample:%d%d || LEVEL-0\n",i,a[i],a[i+1]);
        else if((a[i]==0)&(a[i+1]==1))
            printf("Count:%d || Sample:%d%d || RISING-EDGE\n",i,a[i],a[i+1]);
        else if((a[i]==1)&(a[i+1]==0))
            printf("Count:%d || Sample:%d%d || FALLING-EDGE\n",i,a[i],a[i+1]);
        else
            printf("Count:%d || Sample:%d%d || LEVEL-1\n",i,a[i],a[i+1]);
    }
}
*/

#include <stdio.h>
#include <stdlib.h>
//#include "cal_functions.h"

int main()
{
    int a[100];//INPUT ARRAY
    int *a1,*a2;
    a1=a;
    a2=a+1;
    for(int i=0;i<100;++i)
    {
        a[i]=rand()%2;
        printf("%d",a[i]);
    }
    printf("\n");
    for(int i=0;i<99;++i)
    {
        if((*a1==0)&(*a2==0))
            printf("Count:%d || Sample:%d%d || LEVEL-0\n",i,a[i],a[i+1]);
        else if((*a1==0)&(*a2==1))
            printf("Count:%d || Sample:%d%d || RISING-EDGE\n",i,a[i],a[i+1]);
        else if((*a1==1)&(*a2==0))
            printf("Count:%d || Sample:%d%d || FALLING-EDGE\n",i,a[i],a[i+1]);
        else
            printf("Count:%d || Sample:%d%d || LEVEL-1\n",i,a[i],a[i+1]);
        ++a1;
        ++a2;
    }
}

