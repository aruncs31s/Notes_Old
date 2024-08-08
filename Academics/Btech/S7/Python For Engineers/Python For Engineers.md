---
id: Python For Engineers
aliases:
  - cst445
  - python
cssclasses:
  - wide-page
Created: 2024-07-23
---
# Python For Engineers

```python
print("Hello World")
```

## Contents
- [[#Module 1]]
### Module 1
- [[#Syllabus]]
#### Syllabus

- Getting Started with Python Programming
- Running code in the interactive shell,
  Editing,
  Saving,
  and Running a script.
- Using editors 
  IDLE,
  Jupyter.
- Basic coding skills

  - Working with data types,
  - Numeric data types and Character sets,
  - Keywords,
  - Variables and
  - Assignment statement,
  - Operators,
  - Expressions,
  - Working with numeric data,
  - Type conversions,
  - Comments in the program,
  - Input Processing,
  - and Output,
  - Formatting output.

- How Python works.
- Detecting and correcting syntax errors.
- Using built in functions and modules in math module.
- Control statements
- Selection structure
  - if-else,
  - if-elif-else.
- Iteration structure
  - for, while.
- Testing the control statements.
- Lazy evaluation.

- [ ] 08.08.2024 
#### Precedence

#examples
```python
name=input("Enter Your Name")
print(name)
print("Hi " + name);
```
[File](./Codes/name_1.py)
- It's type is default to **String** so to convert it into integer 

```python
# Adition of 2 numbers by reading user input
def sum(x,y){
  return x+y 
}
num_1= int(input("Enter a number"))
num_2=int(input("Enter the Second Number"))
print("Sum is = " + sum(num_1,num_2))
```

- Interpreted -> Line by line compilation or runtime compilation 
- Intentation -> 4 spaces (Tab) should be  , 
  - Space is used insted of `{},() etc.`


##### Control Statements
main -> Driver function in other languages
In python

```python
if __name__ == "__main__":
  <strting fn here>

```


###### IF ELSE
#syntax
```python 
if condition:
  code
else 
```

#smple_program
```python
# Find Largest among 2 numbers
def is_large(num_1,num_2):
    if (num_1 > num_2):
        return True
    else:
        return False
num_1 = int(input("Enter the first Number"))
num_2 = int(input("Enter the second Number"))
print("The Bigger Number is ", is_large(num_1,num_2) and num_1 or is_large(num_2,num_1) and num_2)
```

```python
# Even or off
```



## References

1. [[python]]
