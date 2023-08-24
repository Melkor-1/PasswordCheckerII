# LeetCode Problem: Strong Password Checker
This is a solution to the Strong Password Checker problem on LeetCode.

# Problem Description
A password is considered strong if it satisfies the following criteria:

- It has at least 8 characters and at most 20 characters.
- It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.
- It must NOT contain three repeating characters in a row ("aaa" is weak, but "aaA" is strong, assuming other conditions are met).

Given a string password, you need to determine if it is strong according to the above criteria.

# Program Description
The provided program is a C implementation of the solution to the Strong Password Checker problem. It defines a function strongPasswordCheckerII that takes a password string as input and returns a boolean indicating whether the password is strong according to the given criteria.

The function checks each character of the password and keeps track of whether the password has at least one lowercase letter, one uppercase letter, one digit, and one special character. It also ensures that there are no three consecutive repeating characters.

The main function includes test cases to demonstrate the correctness of the strongPasswordCheckerII function.

# Usage
Compile the program and run the executable to test the solution:

gcc -o strong_password_checker strong_password_checker.c
./strong_password_checker

The program will run the test cases and use the assert function to check whether the solution is working correctly. If the program runs without any output, it means that all the test cases passed successfully.

# Contributing
Feel free to contribute to the code or provide suggestions for improvements.


