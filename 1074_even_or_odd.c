#include <stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    
    for(int i=0; i<n;i++){
        scanf("%d",&x);
        if(x>0){
            if(x%2==0){
                 printf("EVEN POSITIVE\n");
            }
            else{
                printf("ODD POSITIVE\n");
            }
        }
        else if(x<0){
            if(x%2==0){
                 printf("EVEN NEGATIVE\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }
        }
        else{
            printf("NULL\n");
        }
    }
}