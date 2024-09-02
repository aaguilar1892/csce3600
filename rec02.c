//Alexis Aguilar (aa1732)
//CSCE3600.208 Systems Programming
//Recitation Assignment 2 - More Bits & Bytes

/*
PROGRAM DESCRIPTION:
In this recitation assignment, you will write a complete C program that accepts as input any two
integers from the user and swaps both integers using bitwise operators only without a third
variable. We will use the bitwise XOR ^ opearator to swap the integers as the bitwise XOR operator
evaluates each bit of the result to 1 i the corresponding bits of the operands are different and 0
otherwise.

For this recitation assignment, complete the following tasks:
    1. Declare an integer pointer and then request memory using malloc() for an array of 2
    integers. This means that you should request memory for a size of 2 times the size of an
    integer and assign it to int_ptr. Use man 3 malloc for details on this system call.
    2. If the malloc() system call failed to return memory, print out a meaningful error
    message and terminate the program.
    3. Prompt the user to enter the first integer using printf and then read in the user’s
    response using scanf, storing the integer in the first element of the integer array
    allocated in step 1.
    4. Prompt the user to enter the second integer using printf and then read in the user’s
    response using scanf, storing the integer in the second element of the integer array
    allocated in step 1.
    5. Now, print out the original values of both the integers input by the user.
    6. This next step is where the swapping is done:
        a. Use the bitwise XOR operator ^ on both the array elements and assign the result to
        the first element.
        b. Use the bitwise XOR operator ^ on both the array elements and assign the result to
        the second element.
        c. Use the bitwise XOR operator ^ on both the array elements and assign the result to
        the first element.
    7. Now, print out the swapped values of both the integers input by the user.
    8. Finally, release the allocated memory using free().

REQUIREMENTS:
    * No additional comments are required for this recitation assignment, 
    although you should ensure that your name and EUID is included in your
    code as comments.
    * Your program should be named "rec02.c", without the quotes.
    * Your program will be graded based largely on whether it works 
    corrctly on the CSE machines (e.g., cse01, cse02, ..., cse06), so 
    you should make sure that your program compiles and runs on one of
    the CSE machines before submitting it.

EXAMPLE OUTPUT:
$ ./a.out
Enter first integer: 571
Enter second integer: 18
Original values: 1st = 571 2nd = 18
Swapped values: 1st = 18 2nd = 571
$ ./a.out
Enter first integer: -4 Enter
second integer: 288
Original values: 1st = -4 2nd = 288
Swapped values: 1st = 288 2nd = -4
*/

