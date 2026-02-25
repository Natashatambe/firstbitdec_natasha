#include <stdio.h>

int checkCharacter();   // function declaration

int main()
{
    int result;

    result = checkCharacter();   // function call

    if (result == 1)
        printf("Given character is vowel");
    else
        printf("Given character is consonant");

    return 0;
}

int checkCharacter()    // no parameter, with return type
{
    char ch = 'p';   // hardcoded value

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return 1;   // vowel
    else
        return 0;   // consonant
}