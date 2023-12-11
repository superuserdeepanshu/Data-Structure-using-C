#include<stdio.h>
#include<time.h>
int main(){
    int n;
    srand(time(NULL));
    n=rand();
    printf("%d",n);
    return 0;
}