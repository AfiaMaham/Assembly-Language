#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(int* arr, int* sum, int len);

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
    int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
   // printf("%d",len);
    int sum = 0;
    printf("Before calling asmfunc:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("Sum:%d\n", sum);
getch();

    
    asmfunc(arr, &sum, len); //assembly proc calling
   
   getch();
    
    printf("After calling asmfunc:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }   
    printf("Sum: %d\n", sum);


    
  
    
    return 0;
}