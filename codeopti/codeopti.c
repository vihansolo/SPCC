#include <stdio.h>

int main(int argc, char const *argv[]) {
    printf("Printing numbers 0 to 10 (Non optimized)\n");

    printf("0\n");
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");

    printf("Printing numbers 0 to 10 (Optimized)\n");

	int i;

    for (i = 0; i < 10; i++) {
        printf("%d\n",i);
    }

    printf("Non optimized average using temp\n");

    float temp,avg,a=2,b=3;

    temp = a+b;
    avg = temp/2;

    printf("%.2f\n",avg);



    printf("Optimized average\n");

    float avgVar,aVar=2,bVar=3;

    avg = (a+b)/2;

    printf("%.2f\n",avg);

    return 0;
}
