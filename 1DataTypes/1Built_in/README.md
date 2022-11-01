# Using limits.h 
- Using this library we can understand what is range of datatypes.

```
    #include <stdio.h>
    #include <limits.h>

    int main() {

       printf("The number of bits in a byte %d\n", CHAR_BIT);

       printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
       printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
       printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

       printf("The minimum value of SHORT INT = %d\n",  SHRT_MIN);
       printf("The maximum value of SHORT INT = %d\n",  SHRT_MAX); 

       printf("The minimum value of INT = %d\n", INT_MIN);
       printf("The maximum value of INT = %d\n", INT_MAX);

       printf("The minimum value of CHAR = %d\n", CHAR_MIN);
       printf("The maximum value of CHAR = %d\n", CHAR_MAX);

       printf("The minimum value of LONG = %ld\n", LONG_MIN);
       printf("The maximum value of LONG = %ld\n", LONG_MAX);
    
       return(0);
    }

```

Let us compile and run the above program that will produce the following result −

```
The number of bits in a byte 8
The minimum value of SIGNED CHAR = -128
The maximum value of SIGNED CHAR = 127
The maximum value of UNSIGNED CHAR = 255
The minimum value of SHORT INT = -32768
The maximum value of SHORT INT = 32767
The minimum value of INT = -2147483648
The maximum value of INT = 2147483647
The minimum value of CHAR = -128
The maximum value of CHAR = 127
The minimum value of LONG = -9223372036854775808
The maximum value of LONG = 9223372036854775807
```



## Find range: 
```
    Formulas
    The formulas for a signed number with N bits (using two's complement) are

    min = -1 * 2N - 1
    max = 2N - 1 - 1
    The formulas for an unsigned number with N bits are

    min = 0
    max = 2N - 1
    Example: 8-bit char
    The char has N = 8 bits. Let's verify these formulas with signed char and   unsigned char.

    signed char
    min = -1 * 2N - 1 = -1 * 27 = -128
    max = 2N - 1 - 1 = 27 - 1 = 127
    unsigned char
    min = 0
    max = 2N - 1 = 28 - 1 = 255
```