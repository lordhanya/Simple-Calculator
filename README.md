# Simple Calculator in C
This is a basic calculator program written in C that performs addition, subtraction, multiplication, and division operations. The program allows users to select an operation and input two numbers to perform the chosen calculation.

Features
Addition of two floating-point numbers.
Subtraction of two floating-point numbers.
Multiplication of two floating-point numbers.
Division of two floating-point numbers.
User-friendly menu for selecting operations.
How to Use
Compile the Program:

Save the code in a file named calculator.c.
Open a terminal or command prompt.
Navigate to the directory containing calculator.c.
Compile the program using a C compiler, such as gcc:
Copy
gcc -o calculator calculator.c
Run the Program:

Execute the compiled program:

./calculator
Select an Operation:

Follow the on-screen instructions to select an operation (addition, subtraction, multiplication, or division).
Enter the two numbers when prompted.
View the result of the calculation.
Exit the Program:

Choose the exit option from the menu to terminate the program.
Functions
addition(float num1, float num2): Adds two numbers and prints the result.
subtraction(float num1, float num2): Subtracts the second number from the first and prints the result.
multiplicatio(float num1, float num2): Multiplies two numbers and prints the result.
division(float num1, float num2): Divides the first number by the second and prints the result.
Notes
The program uses a while(1) loop to continuously prompt the user for operations until the exit option is selected.
The division function does not handle division by zero; consider adding error handling for robustness.
The program uses printf to display results with two decimal places for better readability.
Example
Copy
Welcome to the Simple Calculator!

Please select an operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit:
Select the choice of operation you want to do: 1
Enter the first number: 5.5
Enter the second number: 3.2
The sum of 3.20 & 5.50 is 8.70
