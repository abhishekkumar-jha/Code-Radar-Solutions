#include<stdio.h>
int amin(){
    int n;
    scanf("%d", &n);
    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}