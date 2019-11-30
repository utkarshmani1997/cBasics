## Simple copy program with fork/exec system call
- gcc copy.c -o copy
- gcc fork.c -o fork

Run the fork binary by using following command:
- touch copy.copy (empty file to copy contents of copy.c)
- ./fork copy.c copy.copy
