#include <stdio.h>
 
int main() {
    int n; 
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        int x,y;
        int sum=0;
        scanf("%d%d", &x,&y);
        if(x<y){
            x=x-y;
            y=x+y;
            x=y-x;
        }
        else if(x==y){
            sum=0;
            
        }
        for(int j=y+1; j<x; j++){
            if(j%2 != 0){
                sum += j;
            }
        }
        printf("%d\n",sum);
        
    }
    return 0;
}