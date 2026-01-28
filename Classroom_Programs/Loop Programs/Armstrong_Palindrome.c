#include <stdio.h>

int main()
{

int n, a, b, c=0, x, rev = 0;

printf("Enter the 3-digit number =");
scanf("%3d", &n);
x = n;
while (n>0)
{
a = n%10;
n = n / 10;
b =a*a*a ;
c = c + b;
}
if (c==x){
printf ("%d is an Armstrong number", x); }

else{

printf ("%d is not an Armstrong number", x);}

rev = (rev*10)+a;

if (rev = x){
printf("\n %d is a Palindrome number", x); } 

else {
printf("\n %d is not a Palindrome number", x);}
return 0; 
}