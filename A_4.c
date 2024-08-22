/*Take two arrays as input from the users and sort them one by one after sorting print sorted array 
one by one and then merge both the array, print the merged array after sorting.*/

#include <stdio.h>
void BubbleSort(int arr[], int size){
    int i,j;
    for(i=0;i<size-1;i++){
        int temp=0;
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                //swap the element
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }
}
int main(){
    int size1,i,j;
    printf("Enter the size of the array:");
    scanf("%d",&size1);

    int arr1[size1];
    printf("Enter the elements of the first array:");
    for(i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }

    BubbleSort(arr1,size1);
    printf("Sorted first array:\n");
    for(i=0;i<size1;i++){
        printf("%d \n",arr1[i]);
    }


    int size2;
    printf("Enter the size of the 2nd array:");
    scanf("%d",&size2);

    int arr2[size2];
    printf("Enter the elements of 2nd array:");
    for(i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    BubbleSort(arr2,size2);
    printf("Sorted 2nd array:\n");
    for(i=0;i<size2;i++){
        printf("%d \n",arr2[i]);
    }

    int size = size1 + size2;
    int MergedArr[size];
    
    for(i=0;i<size1;i++){
        MergedArr[i]=arr1[i];
    }
    for(j=0;j<size2;j++,i++){
        MergedArr[i]=arr2[j];
    }

    BubbleSort(MergedArr,size);
    printf("Both array are merged and sorted:\n");
    for(i=0;i<size;i++){
        printf("%d \n",MergedArr[i]);
    }


    return 0;
}