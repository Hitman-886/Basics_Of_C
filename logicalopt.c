# include <stdio.h>
int main() {

    int age;
    char citizen;                             // char is a data type to store single character 

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you an Indian citizen? (y/n): ");
    scanf(" %c", &citizen);                               //%c is used to take single character input


    printf("\nUSING LOGICAL OPERATORS :\n");

    if (age >= 18 && (citizen == 'y' || citizen == 'Y')) // here we used & and | both opt. 
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }
  

  return 0;
}