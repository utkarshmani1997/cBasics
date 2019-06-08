#include <stdio.h>
#include <stdlib.h>

void func1() {
        printf("This is func1\n");
}

void func2() {
        printf("This is func2\n");
}

void func3(void (*func)()) {
	func();
}

int main() {
        int i = 0, arr_size = 2;
        /* function pointer points to code. stores the start of executable
         * code.
         * we don't allocate, deallocate memory using function pointer, but
         * it is doable.
         * array of function pointers are allowed.
         * array of function are not allowed
         */
        void (*func_list[])() = {func1, func2};
//        arr_size = sizeof(*func_list)/sizeof(*func_list[0]);
//        printf("%d %lu %lu\n", arr_size, sizeof(*func_list), sizeof(*func_list[0]));
	for (i = 0; i < arr_size; i++) {
                func3((func_list[i]));
        }

        void (**func_list_ptr)();
        func_list_ptr = malloc(sizeof(*func_list_ptr)*arr_size);
	for (i = 0; i < arr_size; i++) {
                func_list_ptr[i] = (func_list[i]);
        }

	for (i = 0; i < arr_size; i++) {
                func3((func_list_ptr[i]));
        }

        free(func_list_ptr);

	return 0;
}

