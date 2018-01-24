
#include<stdio.h>

int main(){

int number,reverseNumber=0,remainder=0;

printf("Enter a number is palindrome or not:\n");
scanf("%d",&number);

int firstNumber = number;

while(number != 0){

        remainder = number % 10;

        reverseNumber = reverseNumber*10 + remainder;

        number /= 10;

}

if(firstNumber == reverseNumber)

        printf("%d is palindrome.\n",firstNumber);
else

        printf("%d is not palindrome.\n",firstNumber);

return 0;
}


