#include<stdio.h>

void main() {
    int i, j;
    int n = 6;
    int row=6, col= 7;
    for(i = 0; i<row; i++) {
        for(j = 0; j<col; j++) {
            if(i==0&&j%3!=0)
                printf("*");
            else if(i==1&&j%3==0)
                printf("*");
            else if(i-j==2)
                printf("*");
            else if(i+j==8)
                printf("*");
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}