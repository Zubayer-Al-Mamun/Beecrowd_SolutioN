 #include <stdio.h>
 
int main() {
    int n;
    scanf("%d",&n);
    int c=0,r=0,s=0;
    for(int i=0;i<n;i++){
        int a;
        char ch;
        scanf("%d %c",&a,&ch);
        if(ch=='C'){
            c+=a;
        }
        else if(ch=='R'){
            r+=a;
        }
        else{
            s+=a;
        }
    }
    int to=c+r+s;
    printf("Total: %d cobaias\n",to);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",((c*1.0)*100.00)/to);
    printf("Percentual de ratos: %.2f %%\n",((r*1.0)*100.00)/to);
    printf("Percentual de sapos: %.2f %%\n",((s*1.0)*100.00)/to);
    return 0;
}