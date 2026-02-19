#include<stdio.h>

void checkCharacter();   // function declaration

void main()
{
    checkCharacter();    // function call
}

void checkCharacter()    // no parameter, no return type
{
    char ch = 'p';   // hardcoded value

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Given character is vowel");
    }
    else
    {
        printf("Given character is consonant");
    }
}
