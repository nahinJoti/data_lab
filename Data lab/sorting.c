
#include <stdio.h>

int main()
{

   int a[20],i, j,size,temp;
    printf("Enter the size of element:");
    scanf("%d",&size);

    printf("The element is:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
        }

        for(i=0;i<size;i++){
            printf("%d ",a[i]);
        }
        printf("\n");


    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(a[j] <a[i])
            {

             temp = a[i];
                a[i] = a[j];
                a[j]=temp;
            }
        }
    }
    printf("Elements of array in sorted ascending order:\n");
    for(i=0; i<size; i++)
    {
        printf("%d  ", a[i]);
    }
	        printf("\n\n");
}
