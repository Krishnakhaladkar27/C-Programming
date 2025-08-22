/* 
     Steps to create the application :-

          Step 1 : Understand the problem statement
          Step 2 : Write the algorithm
          Step 3 : Decide the programming language 
          Step 4 : Write the program 
          Step 5 : Test the written program
     * /


      /////     Write a program which performs addition of two numbers   /////



                Algorithm :-

              START 
              Accept First Number as No1 
              Accept Second Number as No2 
              Create one variable as ANS 
              Perform Addition of No1 and No2 
              Store the addition into variable ANS 
              Display the value of ANS 
              STOP */


               /////////////////////////////////////////////////////////////////////////////////

                //  Problem Statement : Write a program which performs addition of two numbers //

                 /////////////////////////////////////////////////////////////////////////////////
                  #include<stdio.h>


   ////////////////////////////////////////////////////////
   // Function Name : Addition
   // Input : Unsigned integer, Unsigned integer
   // Description : Perform addition of two numbers
   // Author : Krishna Ashok Khaladkar
   // Date : 18/04/2023
   ////////////////////////////////////////////////////////

unsigned int addition(unsigned int iValue1, unsigned int iValue2) 
{
    unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0; // Declare iAns here

    printf("Enter first number: \n");
    scanf("%u", &iNo1); // Use %u for unsigned int

    printf("Enter second number: \n");
    scanf("%u", &iNo2); // Use %u for unsigned int

    iAns = addition(iNo1, iNo2); // Match the function name
    printf("Addition is: %u\n", iAns); // Use %u for unsigned int

    return 0;
}
