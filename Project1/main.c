#include <stdio.h>

int main() {
    
    int UIO = 0;
    
    printf("Welcome, to Math Helper!\n");
    printf("Currently, I can only help with Addition, Subtraction, Multiplication, & Division.\n");
    printf("Enter 1, 2, 3, or 4 To Choose Operation\nThe 4 Operations, Are Stated Above In Order From 1-4\n");
    
    scanf("%d", &UIO);
    
    if (UIO > 0 && UIO < 2) {
        int add(); {
            printf("You selected '1' - Addition\n");
            printf("Please Enter Up-To 4 Numbers\n");
            printf("One Number At A Time\nTwo numbers are required, but you can enter 0 for 3rd & 4th number.\n");
            int a = 0;
            int b = 0;
            int c = 0;
            int d = 0;
            scanf("%d", &a);
            scanf("%d", &b);
            scanf("%d", &c);
            scanf("%d", &d);
            int e = a + b + c + d;
            printf("%d + %d + %d + %d = %d\n", a, b, c, d, e);
            
        }
    }
    
    if (UIO > 1 && UIO < 3) {
        int sub(); {
            printf("You selected '2' - Subtraction\n");
            printf("Please Enter Up-To 4 Numbers\n");
            printf("One Number At A Time\nTwo numbers are required, but you can enter 0 for 3rd & 4th number.\n");
            int a = 0;
            int b = 0;
            int c = 0;
            int d = 0;
            scanf("%d", &a);
            scanf("%d", &b);
            scanf("%d", &c);
            scanf("%d", &d);
            int e = a - b - c - d;
            printf("%d - %d - %d - %d = %d\n", a, b, c, d, e);
            
        }
    }
    
    if (UIO > 2 && UIO < 4) {
        int sub(); {
            printf("You selected '3' - Multiplication\n");
            printf("Please Enter Up-To 4 Numbers\n");
            printf("One Number At A Time\nTwo numbers are required, but you can enter 1 for 3rd & 4th number.\n");
            int a = 0;
            int b = 0;
            int c = 1;
            int d = 1;
            scanf("%d", &a);
            scanf("%d", &b);
            scanf("%d", &c);
            scanf("%d", &d);
            int e = a * b * c * d;
            printf("%d * %d * %d * %d = %d\n", a, b, c, d, e);
            
        }
    }
    
    if (UIO > 3 && UIO < 5) {
        int sub(); {
            printf("You selected '4' - Division\n");
            printf("Please Enter Up-To 4 Numbers\n");
            printf("One Number At A Time\nTwo numbers are required, but you can enter 1 for 3rd & 4th number.\n");
            int a = 0;
            int b = 0;
            int c = 0;
            int d = 0;
            scanf("%d", &a);
            scanf("%d", &b);
            scanf("%d", &c);
            scanf("%d", &d);
            int e = a / b / c / d;
            printf("%d / %d / %d / %d = %d\n", a, b, c, d, e);
            
        }
   }
    
    int redo = 0;
    printf("Would you like to start over?\n0 for No - 1 for Yes\n");
    scanf("%d", &redo);
    if (redo > 0) {
        main();
    }
   
   return 0;
   
}