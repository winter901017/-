#include<stdio.h>
#include<stdlib.h>

main(){
    long long int N,a,b,c,i;
    scanf("%lld",&N);
    for(i=0;i<N;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a==1) printf("%lld\n",b+c);
        if(a==2) printf("%lld\n",b-c);
        if(a==3) printf("%lld\n",b*c);
        if(a==4) printf("%lld\n",b/c);
    }
return 0;
}

//要用long long int才不會爆掉
//要用 %lld
