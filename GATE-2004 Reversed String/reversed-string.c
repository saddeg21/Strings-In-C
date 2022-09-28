#include <stdio.h>
#include <string.h>

int main() {
    char p[20];
    char *s = "string";
    int length = strlen(s);
    int i;
    for(i=0;i<=length;i++){
        if(i==length) {
            p[i] = '\0';
        } else {
            p[i] = s[length-i-1];
        }

    }
    printf("%s",p);
}
