//

#include<stdio.h>
void main(){
    int x = 123456789;
    int a = (x >> 24) & 0xff;
    int b = (x >> 16) & 0xff;
    int c = (x >> 8) & 0xff;
    int d = x & 0xff;
    printf("a = %d",a);
    printf("b = %d",b);
    printf("c = %d",c);
    printf("d = %d",d);
}