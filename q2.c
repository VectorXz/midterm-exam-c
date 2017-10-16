#include <stdio.h>
int main() {
    int num,max=0,min=0,count=1;

    input : {
        scanf("%d",&num);
        if (count == 1) {
            min = num;
            max = num;
        }
        goto check;
    }

    check : {
        if (count <= 20) {
            if(num>=max) {
                max = num;
                if(count == 20) {
                    goto result;
                } else {
                    count++;
                    goto input;
                }
            } else if (num<=min) {
                min = num;
                if(count == 20) {
                    goto result;
                } else {
                    count++;
                    goto input;
                }
            } else {
                if(count == 20) {
                    goto result;
                } else {
                    count++;
                    goto input;
                }
            }
        }
    }
    result : {
    printf("%d %d",max,min);
    }
}
