#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(char* str, int len);

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
    char str[] = "HelloWorld";
    int len = strlen(str) + 1;
    
    printf("String = %s\n", str);

getch();

    asmfunc(str, len); //assembly proc calling
   
   getch();
    
    printf("After calling asmfunc:\n");
   
    printf("String = %s\n", str);


    
  
    
    return 0;
}