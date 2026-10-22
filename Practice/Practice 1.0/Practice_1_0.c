#include <stdio.h>
#include <stdbool.h>

int main()
{

    // this is a comment

    /*
    this is a multi-line comment
    */

    bool isOnline = true;

    if (isOnline)
    {
        printf("The user is online");
    }
    else
    {
        printf("The user is offline");
    }

    return 0;
}