#include <stdio.h>

int main () {
    int max1=10000,max2=10000,max3=10000;
    int num;

    do {
        scanf("%d",&num);

        if(num<=10000) {
            //initialize
            if(max1==10000) {
                max1 = num;
            } else if (max1 != 10000 && max2 == 10000) {
                max2 = num;
            } else if (max1 != 10000 && max2 != 10000 && max3 == 10000) {
                max3 = num;
            }

            //check
            if(num>=max1 || num>=max2 || num>=max3) {
                if(num >= max1) {
                    if(max2 >= max3) {
                        max3 = max2;
                    }
                    if(max1 >= max2) {
                        max2 = max1;
                    }
                    max1 = num;
                } else if(num >= max2) {
                    max2 = num;
                } else if(num >= max3) {
                    max3 = num;
                }
            }
        } else {
            break;
        }

    } while (num>=0);

    printf("%d %d %d",max1,max2,max3);
}
