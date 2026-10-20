# Assignment 5: Classes, Objects, this Pointer, Inline Function, Static Member Function and Friend Class in C++
---

## About the Program

This C++ program demonstrates the following concepts using a `Student` class and an `Auditor` class:

| Concept | Where it is used in the code |
|---|---|
| Class and Object | `Student` class, objects `s1`, `s2` and `temp` |
| Constructor and Destructor | `Student()`, `Student(int, string, float)` and `~Student()` |
| `this` pointer | Constructor (`this->name = name`), function chaining (`return *this`) and `getAddress()` |
| Inline function | `isPass()` |
| Static data member | `count` (shared by all objects) |
| Static member function | `getCount()`, called as `Student::getCount()` |
| Friend class | `Auditor` can access the private data of `Student` |

## Program Flow

1. **Part A:** Takes roll number, name and marks of student 1 as input, creates object `s1` and checks that `this` is the same as `&s1`. Then creates `s2` and sets its values using function chaining.
2. **Part B:** Uses the inline function `isPass()` to show Pass or Fail. Uses the static function `getCount()` to show the total number of objects (before, inside and after a block).
3. **Part C:** The friend class `Auditor` reads the private data of `s2` and adds grace marks to it.

## Files

| File | Description |
|---|---|
| `assi5.cpp` | C++ source code |
| `README.md` | Project description |

## How to Compile and Run

Requirement: a C++ compiler (g++) or Visual Studio Code with a C++ setup.

```bash
g++ assi5.cpp -o assi5
./assi5
```

On Windows PowerShell use `.\assi5` to run.

> **Note:** Do not use a space in the name while giving input (use `Riyansh`, not `Riyansh Ramteke`), because `cin >>` stops reading at a space.

## Sample Input and Output

**Input:**

```
46 Riyansh 72.5
```

**Output:**

```
--- Part A: Class, Object and this Pointer ---
Enter roll no, name and marks of student 1: Roll No: 46, Name: Riyansh, Marks: 72.5
Address of s1     = 0x7ffd273ed290
Value of this     = 0x7ffd273ed290
this pointer points to the calling object
Roll No: 0, Name: Aarav, Marks: 35

--- Part B: Inline and Static Member Function ---
s1 result: Pass
s2 result: Fail
Total students = 2
Inside block, total students = 3
After block, total students = 2

--- Part C: Friend Class ---
Auditor reads private data -> Roll No: 0, Name: Aarav, Marks: 35
After adding grace marks: Roll No: 0, Name: Aarav, Marks: 45
s2 result: Pass
```

The address value will be different on every system.

## Test Cases

| Test Case | Input | Expected Result |
|---|---|---|
| 1 | `46 Riyansh 72.5` | `this == &s1`, s1 Pass, s2 Fail, count 2 then 3 then 2, s2 marks 45 and Pass after grace marks |
| 2 | `7 Sneha 30` | `this == &s1`, s1 Fail, s2 Fail, count 2 then 3 then 2, s2 marks 45 and Pass after grace marks |

## Learning Outcomes

- Declare a class, create objects and access members.
- Use the `this` pointer for name conflicts, function chaining and object address.
- Write inline member functions.
- Share data among objects using static members.
- Give controlled access to private data using a friend class.

## Repository Details

- **Repository:** https://github.com/YOUR_USERNAME/Assignment5
- **Branch:** main
