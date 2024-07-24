#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>
void quit()
{
    fprintf(stderr, "memory exhausted\n");
    exit(1);
}
using namespace std;
int main()
{
    int max = 20;
    char *name = (char *)malloc(max); // what does malloc do? Malloc allocates a block of size bytes of memory, returning a pointer to the beginning of the block.
    //Here we are allocating 20 bytes of memory to name.
    if (name == 0)
        quit();
    printf("Enter your name:\n");

    int i = 0;
    while (true)
    {
        char c = getchar();
        // The following if loop checks if the character is a newline or EOF. If it is, it breaks the loop.
        if (c == '\n' || c == EOF)
        {
            name[i] = 0;
            break;
        }

        name[i] = c; // The character is stored in the name array.

        if (i == max - 1) // If the name array is full, we double the size of the array.
        {
            cout<<"Increasing size of name array"<<endl;
            max = max + max; 
            name = (char *)realloc(name, max); // what does realloc do? Realloc changes the size of the memory block pointed to by ptr. The function may move the memory block to a new location, in which case the new location is returned.
            if (name == 0)
                quit();
        }
        i++;
    }

    printf("Hello %s\n", name);
    free(name);
    return 0;
}