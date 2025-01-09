#include <stdio.h>
#include <stdlib.h>
//1.Viết hàm tính tổng các phần tử có giá trị là chẵn
const int MAX = 100;
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int sumEvenValue(int array[], int size);
int main()
{
    int arr[MAX];
    int size;
    inputArray(arr, &size);
    outputArray(arr, size);
    printf("\nTong cac phan tu co gia tri la chan la: %d",
           sumEvenValue(arr, size));
    return 0;
}
void inputArray(int array[], int *size){
    printf("\nNhap kich thuoc cua mang: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nMang array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    printf("\nMang vua nhap la: ");
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
int sumEvenValue(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}
