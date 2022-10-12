# C Programming 

### C is High Level Programming Language.

#### 1. What is the Programming?
Programming is logical thinking of persion for achieve some task or for automization purpose.

#### 2. So what is Coding?
Coding is implementation of logical thinking(Programming) in Computer Languague.

# ---------DataTypes in C---------:
Datatypes means to decide which type of information we want to use in our program called data type./ type of data a variable can hold.

![DiffDataype](./Images/DiffDataype.PNG)
 
1. Built in Datatypes: 
Built-in Data types are those data types that are pre-defined by the programming language.

2. Derived Datatypes: 
Those data type complete its meaning with another datatype called as Derived Datatypes.

3. User Defined Datatypes: 
those datatypes are defined by user for its own purpose called user defined datatypes.


![DiffDataTypesInDiffCompliers](./Images/DiffDataTypesInDiffCompliers.PNG)

## Datatypes:
### Memory: 
bit and byte is unit of memory measure.
1. 1 bit = block of memory
2. 4 bit = nible
3. 8 bit = 1 byte
4. 16 bit = 1 word
5. 1024 byte = 1Kb
6. 1 byte = 1 letter

### Note : Therefore 1KB must equal 1024 Bytes, 1MB must equal 1048576 Bytes (1024x1024) etc.

### Datatype Range
![Datatype Range](./Images/Datatype.PNG)

### Calculating Range of Varible
if int = 4 byte
1 byte = 8 bit 
4 byte = 32 bit


2^(32-1) = 2147483648;

![datatypeRange](./Images/exampleOnDatatypeRange.PNG)


### Sizeof()
it helps to measure size of variable.

### Limit Header file
this hedear file include methods that help us to find range of datatypes


# ---------Variable---------
Variable means if we create the variable in programme then system
Allocate the block for that variable in memory as per its type.

### Why use the variable:
- Variable used to store the value in memory as per its type
- Variable also used to retrieve the value from memory for display the output for some process

### Rules for Variable Declaration:
1. Variable means name start with alphabet cannot start with digit or any special Symbol other than underscore character.
2. Cannot use the blank space between two variable.
3. Cannot give the keyword variable name.

# Example C program
```
#include<stdio.h>
#include<conio.h>

int main(){
    int a = 4;
    printf("Hello world");
    return 0;
}
```
