#include <stdio.h>
 
int main() {
    int k = 1;
    
    while(k){
        int x,y;
        scanf("%d %d", &x,&y);
        if(x <= 0 || y <= 0){
            k=0;
        }
        else if(x>y){
            x=x-y;
            y=x+y;
            x=y-x;
            int sum=0;
            for(int i=x; i<=y; i++){
                printf("%d ", i);
                sum+=i;
            }
            printf("Sum=%d\n",sum);
        }
        else{
            int sum=0;
            for(int i=x; i<=y; i++){
                printf("%d ", i);
                sum+=i;
            }
            printf("Sum=%d\n",sum);
        }
        
    }
    return 0;
}