#include <stdio.h>
 
int main() {
    int j=7;
    int n=5;
    for(int i=1;i<10;i=i+2){
        while(n<=j){
            printf("I=%d J=%d\n",i,j);
            j--;
        }
        j=j+5;
        n=n+2;
    }
 
    return 0;
}