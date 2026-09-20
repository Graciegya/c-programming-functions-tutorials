# C Programming Fundamentals - Functions Assignment

## Introduction

This repository contains my solutions to the **C Programming Fundamentals - Practical Assignment on Functions in C**.

The assignment contains **10 programming questions**, with each question carrying **10 marks**, giving a total of **100 marks**.

The main purpose of the assignment is to demonstrate the practical use of functions in C programming, including function declarations, function definitions, function calls, parameters, return values, conditional statements, loops, user input, and output.

---

# Questions and Details

## Question 1 - Simple Welcome Function

### Description

Create a C program that contains a function named:

```c
void welcome()

The function should display two lines:

Welcome to C Programming
Today we are learning about functions.

The welcome() function must be called from the main() function.

Concepts Demonstrated
Function declaration
Function definition
Function call
void return type
printf()

Question 2 - Addition Using a Function
Description

Create a function named:

int add(int a, int b)

The function accepts two integers and returns their sum.

The program should ask the user to enter two numbers, pass the numbers to the function, and display the result.

Example
Enter first number: 15
Enter second number: 25
Sum = 40
Concepts Demonstrated
Function parameters
Integer return value
Function call
User input
Addition

Question 3 - Arithmetic Functions
Description

Develop a C program containing four separate functions:

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(float a, float b);

The program should ask the user to enter two numbers and use the functions to calculate:

Addition
Subtraction
Multiplication
Division

The program must also prevent division by zero.

Example
Enter first number: 20
Enter second number: 5

Addition = 25
Subtraction = 15
Multiplication = 100
Division = 4.00
Concepts Demonstrated
Multiple functions
Function parameters
Return values
Arithmetic operations
Floating-point values
Division-by-zero checking

Question 4 - Even or Odd Function
Description

Create a function named:

void checkEvenOdd(int number)

The function should determine whether a number is even or odd.

The user should enter the number in the main() function, and the number should then be passed to checkEvenOdd().

Example
Enter a number: 17
17 is an odd number.
Concepts Demonstrated
void function
Function parameters
Conditional statements
Modulus operator %
Even and odd numbers

Question 5 - Voting Eligibility Function
Description

Create a function named:

void checkEligibility(int age)

The function should determine whether a person is eligible to vote.

According to the assignment:

Age 18 or above → Eligible to vote
Age below 18 → Not eligible to vote

The user should enter their age, which is then passed to the function.

Example
Enter your age: 21
You are eligible to vote.
Concepts Demonstrated
Function parameters
void function
if and else
Relational operators
Decision making

Question 6 - Examination Grade Function
Description

Create a function named:

void displayGrade(float score)

The function accepts a student's examination score and displays the corresponding grade.

The program must also detect invalid scores below 0 or above 100.

Grading System
Score	Grade
80 - 100	A
70 - 79	B
60 - 69	C
50 - 59	D
Below 50	F
Example
Enter score: 75
Grade: B
Concepts Demonstrated
Floating-point parameters
Function calls
if
else if
else
Range checking
Grade classification

Question 7 - Student Average Using a Function
Description

Create a function named:

float calculateAverage(float score1, float score2, float score3)

The function should accept three examination scores and calculate and return their average.

The main() function should ask the user for three scores, pass them to the function, and display the average.

Example
Enter first score: 75
Enter second score: 80
Enter third score: 85

Average Score = 80.00
Concepts Demonstrated
Function parameters
Floating-point values
Return values
Mathematical calculations
Average calculation
printf() formatting

Question 8 - Multiplication Table Function
Description

Create a function named:

void multiplicationTable(int number)

The function should use a loop to display the multiplication table of the entered number from 1 to 12.

The user should enter the number in the main() function.

Example

For the input 6:

Enter a number: 6

6 x 1 = 6
6 x 2 = 12
6 x 3 = 18
...
6 x 12 = 72
Concepts Demonstrated
Functions
Function parameters
for loop
Multiplication
User input
Repetition

Question 9 - Largest of Three Numbers
Description

Create a function named:

int findLargest(int a, int b, int c)

The function should accept three integers and return the largest number.

The program should ask the user to enter three numbers and display the largest value.

Example
Enter first number: 45
Enter second number: 76
Enter third number: 38

Largest Number = 76
Concepts Demonstrated
Function parameters
Integer return value
Conditional statements
Comparison operators
Finding the largest value

Question 10 - Student Result Processing System
Description

Develop a C program that uses several functions to process a student's examination results.

The program should ask for scores in:

C Programming
Mathematics
Electronics

The program should use separate functions to:

Calculate the total
Calculate the average
Display the grade
Display the pass/fail status
Required Functions
float calculateTotal(float a, float b, float c);
float calculateAverage(float total);
void displayGrade(float average);
void displayStatus(float average);
Grading System
Average	Grade
80 - 100	A
70 - 79	B
60 - 69	C
50 - 59	D
Below 50	F

A student passes if the average is 50 or above.

Example
Enter C Programming score: 78
Enter Mathematics score: 82
Enter Electronics score: 70

--------- STUDENT RESULT ---------

C Programming: 78.00
Mathematics: 82.00
Electronics: 70.00

Total Score: 230.00
Average Score: 76.67
Grade: B
Status: PASS
Concepts Demonstrated
Multiple functions
Function parameters
Return values
Mathematical calculations
Conditional statements
Grade classification
Pass/fail determination
Result summary
C Programming Concepts Covered

The 10 questions provide practical experience with:

Function declaration
Function definition
Function calls
Function parameters
Arguments
void functions
Functions that return values
Integer data types
Floating-point data types
printf()
scanf()
if statements
else if
else
Relational operators
Logical operators
Modulus operator
for loops
Arithmetic operations
Basic problem solving
Repository Structure
c-programming-fundamentals-functions-assignment/
│
├── question1_welcome.c
├── question2_addition.c
├── question3_arithmetic.c
├── question4_even_odd.c
├── question5_voting_eligibility.c
├── question6_grade_calculator.c
├── question7_student_average.c
├── question8_multiplication_table.c
├── question9_largest_number.c
├── question10_student_result.c
│
└── README.md
How to Run the Programs
Download or clone this repository.
Open the desired .c file.
Compile the program using a C compiler.
Run the program.
Enter the requested values.
Check the displayed output.
Software Used

The programs can be written and tested using:
Dev-C++
Code::Blocks
Visual Studio Code

Purpose of the Assignment

The purpose of this assignment is to develop my understanding of functions in C programming and apply them to different programming problems.

Through these 10 questions, I practice creating functions, passing arguments, returning values, making decisions, performing calculations, using loops, and processing user input.

Author

Grace Gyan

Biomedical Engineering / Technology Student

Conclusion

This repository demonstrates the implementation of 10 practical C programming problems using functions.

Each program focuses on a different programming concept while reinforcing the importance of writing organized, reusable, and understandable C code.

Learn • Code • Practice • Build


This version follows the actual requirements and details of all 10 questions in your assignment rather than just listing their titles. :contentReference[oaicite:0]{index=0} :contentReference[oaicite:1]{index=1} :contentReference[oaicite:2]{index=2}
