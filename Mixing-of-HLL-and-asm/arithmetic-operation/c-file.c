#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(int T, int U, int V, int* S);

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
    // S = (T + U) - V
    int T = 10;
    int U = 20;
    int V = 5;
    int S = 0;
    
    printf("Values %d, %d, %d \n",T, U, V);
    printf("Result = %d\n", S);
getch();

    
    asmfunc(T, U, V, &S); //assembly proc calling
   
   getch();
    
    printf("After calling asmfunc:\n");
    printf("Result = %d", S);

    return 0;
}