#include<stdio.h>

int main(){

int n,i;
unsigned long long sum = 1;

printf("Enter a number to find factorial:");
scanf("%d",&n);


if(n < 0){
        printf("Error! Factorial of negative number does not exist.");
}
else if(n == 0){
        printf("Factorial of %d is %llu.",n,sum);
}
else{
        for(i=1; i<=n; i++){
                sum *= i;
        }

printf("Factorial of %d is %llu.",n,sum);

}

return 0;
}

