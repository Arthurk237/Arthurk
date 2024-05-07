#include <stdio.h>

int main() {
    int num1,num2;
    printf("Please enter two numbers separated by a space: ");
    scanf("%d %d",&num1,&num2);
    
    printf("Remainder of %d by %d is %d\n",num1,num2,num1%num2);
    
    printf("Please enter two more numbers separated by a comma: ");
    scanf("%d,%d",&num1,&num2);
   printf("Remainder of %d divided by %d is %d\n",num1,num2,num1%num2);
    
    printf("Please enter two final numbers separated by a dash: ");
    scanf("%d-%d",&num1,&num2);
    printf("Remainder of %d divided by %d is %d",num1,num2,num1%num2);
    
    
    return 0;
}