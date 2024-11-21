#include <stdio.h>

int main() {
    char source[] = "Hello, World!";
    char destination[50]; 

    char *src_ptr = source;
    char *dest_ptr = destination;

    while (*src_ptr != '\0') {
        *dest_ptr = *src_ptr;  
        src_ptr++;              
        dest_ptr++;             
    }

    *dest_ptr = '\0';  

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
