#include <stdio.h>

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };

    
   for (int i=0;i<5;i++){
       printf("arr[%d]= %d, pointer address is: %p\n", i, arr[i], (void*)&arr[i]);
    }

    
    int* ptr = arr;  
    for (int i = 0; i < 5; i++) {
        printf("ptr visit *(ptr + %d) = %d\n", i, *(ptr + i));
    }

    return 0;
}