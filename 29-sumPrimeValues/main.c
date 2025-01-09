#include <stdio.h>
#include <stdlib.h>
//3.Viết hàm tính tổng các phần tử là số nguyên tố
const int MAX = 100;
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int isPrime(int num);
int sumPrimeValue(int array[], int size);
int main()
{
    int arr[MAX];
    int size;
    inputArray(arr, &size);
    outputArray(arr, size);
    printf("\nTong cac phan tu la so nguye to la: %d", sumPrimeValue(arr, size));
    return 0;
}

void inputArray(int array[], int *size){
    printf("\nNhap kich thuoc mang: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nMang array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int array[], int size){
    printf("\nMang vua nhap la: ");
    for(int i  = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}

int isPrime(int num){
    if(num < 2){
        return 0;
    }
    for(int i = 2; i <= num - 1; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int sumPrimeValue(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(isPrime(array[i])){
            sum += array[i];
        }
    }
    return sum;
}
