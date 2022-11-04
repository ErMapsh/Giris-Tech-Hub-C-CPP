# Bitwise operators:

The Bitwise operators are used to perform bit-level operations on the operands. The operators are first converted to bit-level and then the calculation is performed on the operands. Mathematical operations such as addition, subtraction, multiplication, etc.

| Operators | Meaning of operators |
| --------- | -------------------- |
| &         | Bitwise AND          |
| l         | Bitwise OR           |
| ^         | Bitwise XOR          |
| ~         | Bitwise complement   |
| <<        | Shift left           |
| >>        | Shift right          |

# 1. Bitwise AND (&)

The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0.
In C Programming, the bitwise AND operator is denoted by &.

```
    12 = 00001100 (In Binary)
    25 = 00011001 (In Binary)

    Bit Operation of 12 and 25
      00001100
    & 00011001
      ________
      00001000  = 8 (In decimal)
```

# 2. Bitwise OR (|)

The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. In C Programming, bitwise OR operator is denoted by |.

```
    12 = 00001100 (In Binary)
    25 = 00011001 (In Binary)

    Bit Operation of 12 and 25
      00001100
    & 00011001
      ________
      00001000  = 8 (In decimal)
```

# 3.Bitwise XOR (exclusive OR) (^)

The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by ^.

```
    12 = 00001100 (In Binary)
    25 = 00011001 (In Binary)

    Bitwise XOR Operation of 12 and 25
      00001100
    ^ 00011001
      ________
      00010101  = 21 (In decimal)

```

# 4.Complement (~)

Bitwise complement operator is a unary operator (works on only one operand). It changes 1 to 0 and 0 to 1. It is denoted by ~.
[Bitwise Complement](https://www.programiz.com/c-programming/bitwise-operators)

# 5. Left Shift (<<)

Left shift operator shifts all bits towards left by a certain number of specified bits. The bit positions that have been vacated by the left shift operator are filled with 0. The symbol of the left shift operator is <<.

```
    212 = 11010100 (In binary)
    212<<1 = 110101000 (In binary) [Left shift by one bit]
    212<<0 = 11010100 (Shift by 0)
    212<<4 = 110101000000 (In binary) =339      2(In decimal)
```

# 6. Right Shift (>>)

Right shift operator shifts all bits towards right by certain number of specified bits. It is denoted by >>.

```
    212 = 11010100 (In binary)
    212 >> 2 = 00110101 (In binary) [Right shift by two bits]
    212 >> 7 = 00000001 (In binary)
    212 >> 8 = 00000000
    212 >> 0 = 11010100 (No Shift)
```
