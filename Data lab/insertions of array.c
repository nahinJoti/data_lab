#include<stdio.h>
int main()
{
    int a[100],i,size,pos,value;
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
        //position number
        printf("which position?\n");
        scanf("%d",&pos);
        //add new value
        printf("Enter the value\n");
        scanf("%d",&value);

        for(i=size;i>=pos;i--){
            a[i]=a[i-1];
        }
        //asseing the valu
        a[pos-1]= value;

        for(i=0;i<size+1;i++){
            printf("%d ",a[i]);
        }
        return 0;


}

