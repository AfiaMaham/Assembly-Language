#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(int* arr, int len,int temp);

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
    int temp = 0;
    int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Array: ");
    for(int i = 0; i < 5; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

getch();

    asmfunc(arr, len, temp); //assembly proc calling
   
   getch();
    
    printf("After calling asmfunc:\n");
   
    printf("Array: ");
    for(int i = 0; i < 5; i++){
        printf("%d ",arr[i]);
    }


    
  
    
    return 0;
}