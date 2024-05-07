#include <stdio.h>

int main()
{
  char binary[256];
  
  int decimal;
  
  do
  {
    printf("Enter A Non-Negative Integer: ");
    scanf("%d", &decimal);
    
    if (decimal < 0)
      printf("Integer Must Be Non-Negative");

  } while (decimal < 0);
  
  int length = 0;
  
  do
  {
    // determine the next digit of the binary number
    if (decimal % 2 == 0) binary[length] = '0';
    else binary[length] = '1';
    
    decimal /= 2;

    length++;
    
  } while (decimal != 0);
  
  binary[length] = '\0';
  
  int middle = length / 2;
  
  char temp;
  for (int i = 0; i < middle; i++)
  {
    temp = binary[i];
    binary[i] = binary[length - i - 1];
    binary[length - i - 1] = temp;
  }
  
  // output the binary number
  printf("\nBinary Number: %s\n\n", binary);
  
  return 0;
}
