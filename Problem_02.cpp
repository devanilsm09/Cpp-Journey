/*/*
==============================================================
                    PROBLEM 02 - NUMBER ANALYZER
==============================================================

File Name:
Problem_02.cpp

Objective:
Create a C++ program that analyzes a number entered by the user.

--------------------------------------------------------------
Requirements
--------------------------------------------------------------

Take one integer input from the user.

Display the following:

1. Original Number
2. Reverse Number
3. Check whether the number is Palindrome or not
4. Check whether the number is Prime or not
5. Count total digits
6. Sum of digits
7. Product of digits
8. Factorial (only for non-negative numbers)
9. Print multiplication table (1 to 10)
10. Print Pattern
    - If number is EVEN -> Print Half Pyramid
    - If number is ODD  -> Print Inverted Half Pyramid

--------------------------------------------------------------
Rules
--------------------------------------------------------------

✔ Make a separate function for every operation.

✔ Use function parameters.

✔ Use return values wherever possible.

✔ main() should only:
   - Take input
   - Call functions
   - Print results

✔ Do NOT use global variables.

✔ Use loops wherever required.

--------------------------------------------------------------
Functions You Should Create
--------------------------------------------------------------

int reverseNumber(int n);

bool isPalindrome(int n);

bool isPrime(int n);

int countDigits(int n);

int sumDigits(int n);

int productDigits(int n);

int factorial(int n);

void printTable(int n);

void printPattern(int n);

--------------------------------------------------------------
Sample Output
--------------------------------------------------------------

Enter Number : 121

Original Number : 121

Reverse Number : 121

Palindrome : Yes

Prime : No

Digits : 3

Sum of Digits : 4

Product of Digits : 2

Factorial : 121! (Calculate normally)

Table

121 x 1 = 121
121 x 2 = 242
...
121 x 10 = 1210

Pattern (Odd Number)

* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

--------------------------------------------------------------
Difficulty
--------------------------------------------------------------

⭐⭐☆

Expected Time:
45-60 Minutes

GitHub File Name:
Problem_02.cpp

Git Commit Message:

Solved Problem 02 - Number Analyzer

==============================================================
*/