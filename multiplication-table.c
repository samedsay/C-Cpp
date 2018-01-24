#include<stdio.h>

int main(){

int i,n,range;

printf("Enter an integer:\n");
scanf("%d",&n);

printf("Enter an integer:\n");
scanf("%d",&range);

printf(" ____________________________\n\n");
for(i=0; i<=range; i++){


        printf("| %5d x %5d = %5d      |\n",n,i,n*i);
        printf("|                            |\n");

}
printf(" ____________________________\n");

return 0;
}

