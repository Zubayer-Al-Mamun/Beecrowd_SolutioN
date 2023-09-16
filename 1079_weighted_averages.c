#include <stdio.h>
 
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        float sum=0;
        for(int j=0;j<3;j++){
            float x;
            scanf("%f",&x);
            if(j==0){
                sum += (x*2);
            }
            else if(j==1){
                sum+=(x*3);
            }
            else{
                sum+=(x*5);
            }
        }
        printf("%.1f\n",(sum/10));
    }
    return 0;
}