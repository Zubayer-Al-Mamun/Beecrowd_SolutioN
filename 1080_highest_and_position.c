#include <stdio.h>
 
int main() {
    int posi,highest=0;
    for(int i=0;i<100;i++){
        int n;
        scanf("%d",&n);
        if(highest<n){
            highest = n;
            posi=i+1;
        }
    }
    printf("%d\n%d\n",highest,posi);
    return 0;
}