#include <stdio.h>
a[5] = {8, 5, 3, 6, 7};
int even_numbers = 0;
int odd_numbers = 0;

int main(void) {
    for(int i=0;i<5;i++){
      if(a[i]%2 == 0){
        even_numbers++;
      }
      else
      {
        odd_numbers++;
      }
    }
    printf("The Even Number Are = %d", even_numbers);
    printf("\nThe Odd Number Are = %d", odd_numbers);
}