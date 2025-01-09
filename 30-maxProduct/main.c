#include <stdio.h>
#include <stdlib.h>
//1. tìm tích lớn nhất của 2 số bất kì trong mảng
const int MAX = 100;
void inputArray (int array[], int *size);
void outputArray(int array[], int size);
int maxProduct(int array[], int size);
int main()
{
    int arr[MAX];
    int size;
    inputArray(arr, &size);
    printf("\nMang vua nhap la: ");
    outputArray(arr, size);
    printf("\nTich lon nhat cua 2 so bat ki trong mang la: %d", maxProduct(arr, size));
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
int maxProduct(int array[], int size){
    int max = array[0] * array[1];
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(max < array[i] * array[j]){
                max = array[i] * array[j];
            }
        }
    }
    return max;
}













