#include<stdio.h>
int main()
{
    int arr [10],search ,i,item;
    printf("Enter number of elements in arr:\n");
    scanf("%d",&item);
     printf("Enter  element:\n",i);
     for (i=0;i<item;i++)
        scanf("%d",&arr[i]);
        printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i = 0; i < item; i++){
    if(arr[i]==search){
        printf (" item found  at index:%d",i);
        break;
    }
  }

     if(i==item)

    printf ("Item is not found");
    return 0;
}
