#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(int* arr, int len, int* count);

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
    int count = 0;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Array: ");
    for(int i = 0; i < 6; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

getch();

    asmfunc(arr, len,&count); //assembly proc calling
   
   getch();
    
    printf("After calling asmfunc:\n");

    printf("numbers: %d",count);
    return 0;
}