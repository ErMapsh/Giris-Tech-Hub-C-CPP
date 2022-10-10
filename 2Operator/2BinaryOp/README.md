# Binary Operators :-
Operators that operate or work with two operands are binary operators. 

```
    #include<stdio.h>
    int main()
    {
        int a = 14, b = 4; // declaration with initialization of var
        printf("%d", a+b);
        printf("%d", a>b);
        printf("%d", a&b);
        printf("%d", a||b);
        return 0;
    }   
    
```

### Note: Modular not working with float but there is way to resolve this issue
1. using fmod() function from math.header file

```
    #include<stdio.h>
    #include<math.h>

    int main(){
        float a, b, c;
        a = 40.0f, b = 2.2f;

        c = fmod(a, b);
        printf("%f", c);
        return 0;
    }
```

2. using type casting
```
    #include<stdio.h>
    #include<math.h>

    int main(){
        float a, b, c;
        a = 40.0f, b = 2.2f;

        c = (int) a % (int) b;

        printf("%f", c);
        return 0;
    }
```