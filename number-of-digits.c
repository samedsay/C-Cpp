#include<stdio.h>

int main(){

long long number;
int counter=0;

printf("Enter a number to find digits:");
scanf("%lld",&number);

while(number != 0){

        number /=10;
        counter++;
}

printf("Number of digits are %d", counter);

return 0;
}
