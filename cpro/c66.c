#include<stdio.h>
//#define PI 3.14159265
int main(){
    int radius=5;
    const PI=3.14159265;
    double circumference = 2 *radius * PI;
    printf("r:%d,circumference:%lf", radius, circumference);
    return 0;
}