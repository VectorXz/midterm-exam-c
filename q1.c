#include <stdio.h>

int main() {
    char a,b;
    float sum,avg;

    //INPUT
    scanf(" %c",&a);
    scanf(" %c",&b);

    //OUTPUT
    printf("%10c\n",a);
    printf("%10d\n",a);

    printf("%10c\n",b);
    printf("%10d\n",b);

    sum = a+b;
    avg = sum/2;

    printf("%10.2f\n",sum);
    printf("%10.2f",avg);
}
