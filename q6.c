#include <stdio.h>

int main() {
    char sentences[20],i,space=0,the=0;

    //receive sentences
    for(i=0;i<20;i++) {
        scanf("%c",&sentences[i]);
    }

    //finding space
    for(i=0;i<20;i++) {
        if(sentences[i] == ' ') {
            space++;
        }
    }

    //finding the
    for(i=0;i<20;i++) {
        if(sentences[i] == 't' || sentences[i] == 'T') {
            if(sentences[i+1] == 'h' || sentences[i+1] == 'H') {
                if(sentences[i+2] == 'e' || sentences[i+2] == 'E') {
                    the++;
                }
            }
        }
    }

    printf("%d\n",space);
    printf("%d",the);
}
