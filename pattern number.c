#include<stdio.h>
int main()
{
    int r,p,l=1,l2=5,v=1;
    for(r=1;r<=4;r++){
        for(v=1;v<=l;v++){
            for(p=1;p<=l;p++){}
            printf("%d",v);
        }
        l=l+2;
        printf("\n");

    }

   for(r=1;r<=3;r++){
        for(v=1;v<=l2;v++){
            for(p=1;p<=l2;p++){}
            printf("%d",v);
        }
        l2=l2-2;
        printf("\n");
}


}



