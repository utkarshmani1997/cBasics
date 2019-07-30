## MACRO Protection
This tutorial is about use of macros to execute some part of the code
by defining it under macros. This is very useful in debugging or also
if you want to add some feature only for some release.Using macros you
can enable/disable the code at comile time.

- Compile the program with following command:
    - gcc -DTEST test.c
    ```
    $./a.out
    Test mode
    Hi! This is utkarsh
    ```
    - gcc -DDEBUG test.c
    ```
    $./a.out
    Debug mode
    Hi! This is utkarsh
    ```
    - gcc -DDEBUG -DTEST test.c
    ```
    $./a.out
    Test mode
    Debug mode
    Hi! This is utkarsh
    ```
- Can we have more than one main function in one file ?
    - yes, indeed using macros we can define multiple main functions.
      without macros it will give an error like this
      ```
      test.c:15:5: error: redefinition of ‘main’
      int main() {
      ^
      test.c:4:5: note: previous definition of ‘main’ was here
      int main() {
      ```
    - other way is to recursively call main function from main().
