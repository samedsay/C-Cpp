#include<stdio.h>

int main(){

int i,t1=0,t2=1,next,range;


printf("Enter a range number:");
scanf("%d",&range);

for(i=1; i<=range; i++){

        printf("%d, ",t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;

}

return 0;
}
