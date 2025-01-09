#include <stdio.h>
#include <stdlib.h>
//2. tìm tổng lớn nhất của dãy con liên tiếp trong mảng
const int MAX = 100;
void inputArray (int array[], int *size);
void outputArray(int array[], int size);
int maxSubArraySum(int array[], int size);
int main()
{
    int arr[MAX];
    int size;
    inputArray(arr, &size);
    printf("\nMang vua nhap la: ");
    outputArray(arr, size);
    printf("\nTong lon nhat cua day con lien tiep trong mang la: %d", maxSubArraySum(arr, size));
    return 0;
}
void inputArray (int array[], int *size){
    printf("\nNhap kich thuoc mang: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nArray[%d] = ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
int maxSubArraySum(int array[], int size){
    int maxStart = array[0];
    int maxEnd = array[0];
    for(int i = 1; i <= size - 1; i++){
        if(maxEnd + array[i] > array[i]){
            maxEnd = maxEnd + array[i];
        }else{
            maxEnd = array[i];
        }
        if(maxEnd > maxStart){
            maxStart = maxEnd;
        }
    }
    return maxStart;
}

















