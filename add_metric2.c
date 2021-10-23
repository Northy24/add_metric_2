#include <stdio.h>

int main(){
    int m,n,s;
    //input dimension
    printf("Enter Metric Dimension(m<=1 and n<=3) : "); scanf("%d %d",&m,&n);
    s = m*n;
    int i = 0;
    int metric1[s];
    int metric2[s];
    int sum[s];
    int *p1,*p2,*p3;

    //input metric1
    while(i < s){
        scanf("%d",&metric1[i]);
        i++;
    }
    printf("Done\n");
    i = 0;
    //input metric2
    while(i < s){
        scanf("%d",&metric2[i]);
        i++;
    }
    printf("Done\n");
    p1 = metric1;
    p2 = metric2;
    i = 0;
    while(i <= s){
        sum[i] = *p1 + *p2;
        *p1++;
        *p2++;
        i++;
    }
    p1 = metric1;
    p2 = metric2;
    p3 = sum;
    //print metric1
    printf("Metric 1 : \n");
    for(int j = 1; j <= s;j++){
        printf("%d ",*p1);
        if(j % n == 0){
            printf("\n");
        }
        *p1++;
    }
    //print metric2
    printf("Metric 2 : \n");
    for(int j = 1; j <= s;j++){
        printf("%d ",*p2);
        if(j % n == 0){
            printf("\n");
        }
        *p2++;
    }

    //result
    printf("Metric1 + Metric2 : \n");
    for(int j = 1; j <= s;j++){
        printf("%d ",*p3);
        if(j % n == 0){
            printf("\n");
        }
        *p3++;
    }

    return 0;
}
