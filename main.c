#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void insertsort(int a[],int size)
{
    int i,j,temp;
    for(i=2;i<=size;i++)
    {
        temp=a[i];
        for(j=i-1;j>0;j--)//use to decrement the value of j.
        {
            if(a[j]>temp)
            {
               a[j+1]=a[j];

            }

        else
            break;//this part is use to break the loop for(j=i-1;j>0;j--) when if(a[j]>temp) is not true.
        }
        a[j+1]=temp;
    }
}
int main()
{
    int i,a[60],n;
    clock_t st,et;
    double ts;
    printf("please enter the number of digit you want to :\n");
    scanf("%d",&n);
    printf("\n");
    printf("unsorted array are:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    st=clock();
    insertsort(a,n);//calling function.
    et=clock();
    ts=(double)(et-st)/CLOCKS_PER_SEC;//measuring total time.
    printf("\n\nsorted array:\n\n");
    for(i=1;i<=n;i++)
    {
       printf("%d\t",a[i]);//printing new sorted array.
    }
    printf("\nThe total time need to merge the array: %lf\n",ts);
    return 0;
}
