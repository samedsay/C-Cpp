
#include<stdio.h>

int main(){

int i,number1,number2,gcd;

printf("Enter two numbers to find gcd:");
scanf("%d %d",&number1,&number2);

for(i=1; i <= number1 && i <= number2; i++){


        if(number1 % i == 0 && number2 % i == 0)
                gcd = i;

}
printf("G.C.D. of %d and %d is %d", number1, number2, gcd);

return 0;
}


