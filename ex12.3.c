#include<stdio.h>
#include<string.h>

main()
{
    FILE *fp;
    int num,quantity,i;
    float price,value;
    char item[10],filename[10];

    printf("Input File Name: ");
    gets(filename);
    fp = fopen(filename,"w");
    printf("Input Inventory Data: \n");
    printf("Item name Number Price Quantity\n");
    for(i=0;i<=3;i++){
        fscanf(stdin, "%s %d %f %d",item,&num,&price,&quantity);
        fprintf(fp,"%s %d %.2f %d",item,num,price,quantity);
    }
    fclose(fp);
    fprintf(stdout,"\n\n");

    fp=fopen(filename,"r");
    printf("Item name Number Price Quantity Value\n");
    for(i=1;i<=3;i++){
        fscanf(fp, "%s %d %f %d",item,&num,&price,&quantity);
        value= price * quantity;
        fprintf(stdout,"-8s %7d %8.2f %8d %11.2f\n",item,num,price,quantity,value);
    }
    fclose(fp);
}
