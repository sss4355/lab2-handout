#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "lib/duplicates.h"

int main(void) {
    // Testing number_distinct
    printf("%s\n", "Testing number_distinct ...");
    const char **a = calloc(3, sizeof(char*)); // create an array of strings on heap
    a[0] = "hello";
    a[1] = "world";
    a[2] = "world";
    assert(2 == number_distinct(a, 3));
    free(a);
    
    // Add your own tests here.

    printf("%s\n", "Passed all tests!");


    // Testing indices_distinct
    printf("%s\n", "Testing indices_distinct ...");
    // Add your own tests here.

    printf("%s\n", "Passed all tests!");


    // Testing remove_duplicates
    printf("%s\n", "Testing remove_duplicates ...");
    // Add your own tests here.

    printf("%s\n", "Passed all tests!");
    return 0;
}
