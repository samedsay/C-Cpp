#include<stdio.h>

int main(){

int number, reverseNumber=0, firstnumber, remainder;

printf("Enter a number to take it's reverse:");
scanf("%d", &number);

firstnumber = number;

while(number != 0){

        remainder = number % 10;

        reverseNumber = reverseNumber*10 + remainder;

        number /= 10;

}

printf("The inverse of %d is %d",firstnumber,reverseNumber);

return 0;
}


