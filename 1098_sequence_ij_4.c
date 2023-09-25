#include <stdio.h>

int main()
{
    for(float i =0;i<2.1;i=i+.2){
        for(float j=1;j<=3;j++){
            if(i<1 && i!=0 || i>1 && i<2){
                printf("I=%.1lf J=%.1lf\n",i,j+i);
            }
            else{
                printf("I=%d J=%d\n",(int)i,((int)i+(int)+j));
            }
        }
    }

    return 0;
}