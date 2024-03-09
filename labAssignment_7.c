#include <stdio.h>

void swap(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;
}

void selectionSort(int arr[], int n, int count[]){
for(int i=0; i <n-1; i++){
    int min_idx=i;
    for(int j=i+1; j < n; j++){
        if(arr[j] < arr[min_idx]){
        min_idx=j;
    }
}
    if(min_idx!=i){
    swap(&arr[i], &arr[min_idx]);
    count[arr[i]]++;
    count[arr[min_idx]]++;
     }

   }
}



void bubbleSort(int arr[], int n, int count[]){
for (int i=0; i < n-1; i++){
    for( int j=0; j< n-i-1; j++){
        if(arr[j] > arr[j+1]){
            swap(&arr[j], &arr[j+1]);
            count[arr[j]]++;
            count[arr[j+1]]++;
        }
    }
}
}
void printarr(int arr[], int n, int count[]){
for (int i=0; i < n; i++){
    printf("%d: %d\n", arr[i], count[arr[i]]);
}
}

int main(){
int arr1[]= {97, 16, 45, 63, 13, 22, 7, 58, 72};
int arr2[]= {90, 80, 70, 60, 50, 40, 30, 20, 10};
int n1=9;
int n2=9;

int count1[100]={0};
int count2[100]={0};
bubbleSort(arr1, n1, count1);
printf("array1 bubble sort:\n");

for(int i=0; i<n1; i++){
    printf("%d: %d\n", arr1[i], count1[arr1[i]]);
}
selectionSort(arr1, n1, count1);
printf("array1 selection sort:\n");

for(int i=0; i <n1; i++){
    printf("%d: %d\n", arr1[i], count1[arr1[i]]);
}

bubbleSort(arr2, n2, count2);
printf("array2 bubble sort:\n");
for(int i=0; i<n2; i++){
    printf("%d: %d\n", arr2[i], count2[arr2[i]]);
}

selectionSort(arr2, n2, count2);
printf("array2 selection sort:\n");
for(int i=0; i <n2; i++){
    printf("%d: %d\n", arr2[i], count2[arr2[i]]);
}
return 0;
}
