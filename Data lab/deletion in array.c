#include<stdio.h>
int main()
{
    int a[20],i,size,pos,value;
    printf("Enter the size of element:");
    scanf("%d",&size);

    printf("The element is:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
        }hmm
        for(i=0;i<size;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
        //position number
        printf("Enter the position\n");
        scanf("%d",&pos);
        for(i=pos-1;i<=size-2;i++){
            a[i]=a[i+1];
        }
        a[size-1]=0;

        for(i=0;i<size;i++){
            printf("%d ",a[i]);
        }
        return 0;

}
