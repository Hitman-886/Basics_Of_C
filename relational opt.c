# include <stdio.h>
int main(){

int a,b;
printf(" ENTER 2 VALUES: ");
scanf("%d\n,%d\n",&a,&b);         //taking input from user

printf("\n USING RELATIONAL OPERATORS :");
printf("a==b : %d\n ", a==b);      // equal to 
printf("a!=b : %d\n",a!=b);        // not equal to
printf("a>b  : %d\n",a>b);         // greater than
printf("a<b  : %d\n",a<b);         // less than
printf("a>=b : %d\n",a>=b);       // greater than or equal to
printf("a<=b : %d\n",a<=b);       // less than or equal to

// all relational operators return either 1 (true) or 0 (false)


return 0;

}
