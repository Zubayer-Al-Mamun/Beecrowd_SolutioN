#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        char str[100];
        scanf("%s", &str);
        int sum=0;
        for(int j=0;str[j] != '\0';j++){
            char lol = str[j];
            if(lol=='0'){
                sum+=6;
            }
            else if(lol=='1'){
            sum+=2;                
            }
            else if(lol=='2'){
                sum+=5;
            }
            else if(lol=='3'){
                sum+=5;
            }
            else if(lol=='4'){
                sum+=4;
            }
            else if(lol=='5'){
                sum+=5;
            }
            else if(lol=='6'){
                sum+=6;
            }
            else if(lol=='7'){
                sum+=3;
            }
            else if(lol=='8'){
                sum+=7;
            }
            else if(lol=='9'){
                sum+=6;
            }
        }
        printf("%d leds\n",sum);
    }
    return 0;
}