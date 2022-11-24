# What is the difference between while loop and do while loop? (Explain point wise)

|   | While                                                                      | do while                                                                |
|---|----------------------------------------------------------------------------|-------------------------------------------------------------------------|
| 1 | Condition is checked first then statement(s) is executed.                  | Statement(s) is executed atleast once, thereafter condition is checked. |
| 2 | It might occur statement(s) is executed zero times, If condition is false. | At least once the statement(s) is executed.                             |
| 3 | No semicolon at the end of while. while(condition)                         | Semicolon at the end of while. while(condition);                        |
| 4 | If there is a single statement, brackets are not required                  | Brackets are always required.                                           |
| 5 | Variable in condition is initialized before the execution of loop.         | variable may be initialized before or within the loop.                  |
| 6 | while loop is entry controlled loop.                                       | do-while loop is exit controlled loop                                   |
| 7 | while(condition) { statement(s); }                                         | do { statement(s); } while(condition);                                  |