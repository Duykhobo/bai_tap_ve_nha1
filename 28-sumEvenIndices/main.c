#include <stdio.h>
#include <stdlib.h>
//2.Viết hàm tính tổng các phần tử có vị trí là chẵn
const int MAX = 100;
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int sumEvenIndice(int array[], int size);

int main()
{
    int arr[MAX];
    int size;
    inputArray(arr, &size);
    outputArray(arr, size);
    printf("\nTong cac phan tu co vi tri chan la: %d", sumEvenIndice(arr, size));
    return 0;
}

void inputArray(int array[], int *size){
    printf("\nNhap kich thuoc cua mang: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int array[], int size){
    printf("\nMang vua nhap la: ");
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}

int sumEvenIndice(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(i % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}
