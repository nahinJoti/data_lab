#include<stdio.h>
int main()
{
    int a[100],i,j,size,temp;
    printf("Enter the size of element:");
    scanf("%d",&size);

    printf("The element is:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
        }
        printf("Befor sorting:\n");
        for(i=0;i<size;i++){
            printf("%d ",a[i]);
        }
       printf("\n");
        for(i=0;i<size;i++){
            for(j=0;j<size-1;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("After sorting assending:\n");
        for(i=0;i<size;i++){
            printf("%d ",a[i]);
        }





      return 0;

}
