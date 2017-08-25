/*
 *  main.c
 *  WriteSomething_C
 *
 *  This program will help you get the size of a phrase given by the user, and let you
 *  know if that size is an even or odd number.
 *
 *  C Standard: C99
 *
 *  Author: León Felipe Guevara Chávez
 *  email:  leon.guevara@itesm.mx
 *  date:   May 29th, 2017
 */
#include <stdio.h>
#include <string.h>

int main() {
    long int    phraseSize;                 //  We use this variable to get the size of the phrase.
    char        phrase[100];                //  We declare this char array to hold the user's phrase.
                                            //  It's maximum length would be 100.
    char        phraseSizeIs[4];            //  We declare this char array to identify is the length is
                                            //  an odd or an even number.

    //  We ask for a prhase and collect it in the phrase string
    printf("Write something: ");
    scanf ("%[^\n]%*c", phrase);

    //  We compute the size of the phrase with the strlen() function from the string.h header.
    phraseSize = strlen(phrase);

    //  We identify if the phrase size is an odd or an even number.  We do this dividing the size by
    //  two.  If the remainder of such division is 0, then it is an even number; otherwise, it is an
    //  odd number
    if ((phraseSize % 2) == 0) {
        strlcpy(phraseSizeIs, "even",4);
    } else {
        strlcpy(phraseSizeIs, "odd",4);
    }

    //  We display our findings
    printf("Your phrase's size is %li and that is an %s number", phraseSize, phraseSizeIs);

    return 0;
}