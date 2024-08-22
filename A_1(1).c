/*Write a program to delete an element from an array.*/

#include <stdio.h>
#define MAX 100
int main()
{
    int arr[MAX],i,j,n,item;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be deleted:");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(arr[i]==item){
            for(j=i;j<n;j++){
                arr[j]=arr[j+1];
            }
        }
    }
    n--;
    printf("Updated Array is:\n");
    for(i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}