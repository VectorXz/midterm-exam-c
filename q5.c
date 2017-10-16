#include <stdio.h>

int main() {
    int n,key,i,j,count=0;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&key);

    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    //find matching key
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if (arr[i] + arr[j] == key && i != j) {
                count++;
            }
        }
    }

    printf("%d",count);
}
