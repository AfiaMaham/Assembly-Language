#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(char* str, char* arr, int len);

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
    char str[] = "Hello World!!";
    int len = strlen(str) + 1;
    char arr[14] = {0};
    printf("len %d",len);
    printf("String1 = %s\n", str);
    printf("String2 = %s\n", arr);

getch();

    asmfunc(str, arr, len); //assembly proc calling
   
   getch();
    
    printf("After calling asmfunc:\n");
   
    printf("String1 = %s\n", str);
    printf("String2 = %s\n", arr);


    
  
    
    return 0;
}