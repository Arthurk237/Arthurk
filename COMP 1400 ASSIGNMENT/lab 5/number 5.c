#include <stdio.h>

int main(void) {
  int sum =0;
  char isbn[12];
  printf("Please enter the first 12 digits of the ISBN:");
  scanf("%s", isbn);
  for(int i=0; i<12; i++){
    int digit = isbn[i] - '0';
    if(i%2!=0){
      printf(" %d x 3 +", digit);
      sum += digit*3;
    
    }
    else{
      printf(" %d x 1 +", digit);
      sum += digit;
    }
  }
  printf("\nsum: %d\n", sum);

  if (sum % 10 == 0) {
    printf("The check digit is 0");
  }
  else {
    int rem = sum % 10;
    int ans = 10 - rem;
    printf("The check digit is %d", ans);
  }
  return 0;
}