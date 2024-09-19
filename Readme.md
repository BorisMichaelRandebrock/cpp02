# C++ - Module 02: Ad-hoc Polymorphism, Operator Overloading, and Orthodox Canonical Form

## Summary
This repository contains the completed exercises of Module 02 from the C++ modules series. The project focuses on implementing ad-hoc polymorphism, operator overloading, and the Orthodox Canonical Class Form in C++98.

**Version:** 8

## Table of Contents
1. [Introduction](#introduction)
2. [General Rules](#general-rules)
3. [New Rules](#new-rules)
4. [Exercise 00: My First Class in Orthodox Canonical Form](#exercise-00-my-first-class-in-orthodox-canonical-form)
5. [Exercise 01: Towards a More Useful Fixed-Point Number Class](#exercise-01-towards-a-more-useful-fixed-point-number-class)
6. [Exercise 02: Now We’re Talking](#exercise-02-now-were-talking)
7. [Exercise 03: BSP](#exercise-03-bsp)

---

## Introduction
C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of C. This module has introduced fundamental Object-Oriented Programming (OOP) concepts using the **C++98 standard**.

Through the exercises, the project demonstrates key OOP principles such as class design in the **Orthodox Canonical Form**, operator overloading, and ad-hoc polymorphism, providing a strong foundation for working with C++.

---

## General Rules
All code adheres to the following rules:
- **Compilation**: The project is compiled using `c++` with the flags `-Wall -Wextra -Werror`, ensuring compatibility with the `-std=c++98` standard.
- **Naming and Formatting**: Class names are in UpperCamelCase, and file names reflect the class names. Code is clean, readable, and follows consistent formatting rules.
- **Memory Management**: Proper memory management techniques have been applied, including preventing memory leaks through careful usage of dynamic memory allocation (e.g., avoiding improper use of `new`).

---

## New Rules
All classes are designed following the **Orthodox Canonical Form**:
- A default constructor
- A copy constructor
- A copy assignment operator
- A destructor

---

## Exercise 00: My First Class in Orthodox Canonical Form
In this exercise, a class representing a fixed-point number has been implemented, following the Orthodox Canonical Form. The class includes:
- A default constructor that initializes the fixed-point value to 0.
- A copy constructor and a copy assignment operator for deep copying.
- Getter and setter methods (`getRawBits` and `setRawBits`) to manipulate the raw fixed-point value.
- A properly defined destructor.

Testing outputs the correct order of constructor/destructor calls as well as the raw values of the objects.

---

## Exercise 01: Towards a More Useful Fixed-Point Number Class
This exercise enhances the fixed-point number class by adding:
- **Integer and Float Constructors**: The fixed-point number can now be initialized from both integer and floating-point values.
- **Conversion Methods**: The class includes methods to convert a fixed-point number to a floating-point (`toFloat`) or integer (`toInt`) value.
- **Operator Overloading**: The insertion operator (`<<`) is overloaded to print the floating-point representation of the fixed-point number.

Testing demonstrates the proper conversion of fixed-point numbers to their floating-point and integer counterparts.

---

## Exercise 02: Now We’re Talking
In this exercise, the fixed-point class is further extended with:
- **Comparison Operators**: Overloaded comparison operators (`>, <, >=, <=, ==, !=`) allow comparing two fixed-point numbers.
- **Arithmetic Operators**: Overloaded arithmetic operators (`+, -, *, /`) enable performing operations between fixed-point numbers.
- **Increment/Decrement Operators**: Pre- and post-increment/decrement operators are implemented to manipulate the smallest representable fixed-point value.
- **Static Min/Max Functions**: `min` and `max` static functions return references to the smallest or largest fixed-point number, supporting both constant and non-constant references.

All features were tested, and the fixed-point arithmetic and comparison operations work as expected.

---

## Exercise 03: BSP
In this exercise, a 2D point class was created, and a function `bsp()` was implemented to check if a given point lies inside a triangle formed by three points. 
- The `Point` class is designed following the Orthodox Canonical Form and uses fixed-point numbers to represent coordinates.
- The **BSP algorithm** determines whether a point is inside the triangle or not.

The solution includes multiple test cases to ensure the `bsp()` function correctly identifies whether points lie inside or outside the triangle.

