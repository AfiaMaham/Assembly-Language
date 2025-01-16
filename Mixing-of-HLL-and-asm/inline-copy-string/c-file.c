#include <stdio.h>


//c with inline assembly;



int main() {
    system("cls");
    char str1[] = "Hello World!!";
    char arr[14] = {0};
    printf("welcome from  from C! \n");

    
    // inline Assembly block
    __asm{
        
        lea esi, str1
        lea edi, arr
        mov ecx, 14
        L1:
        mov al, [esi]
        mov [edi], al
        inc esi
        inc edi
        loop L1
    }

    printf("array: %s\n",arr);
    return 0;
}