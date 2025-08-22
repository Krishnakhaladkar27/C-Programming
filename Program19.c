#include <stdio.h>

void Display(int iNo)
 {
    int iCnt;
    // Handle the case when iNo is negative
    if (iNo < 0)
     {
        // Loop for negative numbers (from iNo to -1)
        for (iCnt = iNo; iCnt < 0; iCnt++)
      {
            printf("%d\n", iCnt);
        }
    }
     else 
     {
        // Loop for positive numbers (from 1 to iNo)
        for (iCnt = 1; iCnt <= iNo; iCnt++)
         {
            printf("%d\n", iCnt);
        }
    }
}

int main() {
    int iValue = 0;
    printf("Enter the frequency: \n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}
