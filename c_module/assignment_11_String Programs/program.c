#include<stdio.h>
#include<string.h>
#include<ctype.h>

// a. mystrcpy
void mystrcpy(char dest[], char src[])
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

// b. mystrlen
int mystrlen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

// c. mystrcmp
int mystrcmp(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }

    return str1[i] - str2[i];
}

// d. mystrcat
void mystrcat(char str1[], char str2[])
{
    int i = 0, j = 0;

    while(str1[i] != '\0')
    {
        i++;
    }

    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

// e. mystrncpy
void mystrncpy(char dest[], char src[], int n)
{
    int i;

    for(i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0';
}

// f. mystrupper
void mystrupper(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }
}

// g. mystrlower
void mystrlower(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
}

// h. mystrrev
void mystrrev(char str[])
{
    int i, len;
    char temp;

    len = mystrlen(str);

    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

// i. mystrstr
char* mystrstr(char str[], char sub[])
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
        {
            return &str[i];
        }
    }

    return NULL;
}

// j. mystrcasecmp
int mystrcasecmp(char str1[], char str2[])
{
    int i = 0;

    while(tolower(str1[i]) == tolower(str2[i]) && str1[i] != '\0')
    {
        i++;
    }

    return tolower(str1[i]) - tolower(str2[i]);
}

// k. mystrchr
char* mystrchr(char str[], char ch)
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            return &str[i];
        }
    }

    return NULL;
}

// l. mystrrchr
char* mystrrchr(char str[], char ch)
{
    int i;

    for(i = mystrlen(str) - 1; i >= 0; i--)
    {
        if(str[i] == ch)
        {
            return &str[i];
        }
    }

    return NULL;
}

// m. mystrncmp
int mystrncmp(char str1[], char str2[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        if(str1[i] == '\0')
        {
            break;
        }
    }

    return 0;
}

// n. mystrnstr
char* mystrnstr(char str[], char sub[], int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
        {
            return &str[i];
        }
    }

    return NULL;
}

// o. mystrncat
void mystrncat(char str1[], char str2[], int n)
{
    int i = 0, j;

    while(str1[i] != '\0')
    {
        i++;
    }

    for(j = 0; j < n && str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }

    str1[i] = '\0';
}

// p. mystrncasecmp
int mystrncasecmp(char str1[], char str2[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(tolower(str1[i]) != tolower(str2[i]))
        {
            return tolower(str1[i]) - tolower(str2[i]);
        }

        if(str1[i] == '\0')
        {
            break;
        }
    }

    return 0;
}

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    mystrcpy(str3, str1);
    printf("mystrcpy = %s\n", str3);

    printf("mystrlen = %d\n", mystrlen(str1));

    printf("mystrcmp = %d\n", mystrcmp("abc", "abc"));

    mystrcat(str1, str2);
    printf("mystrcat = %s\n", str1);

    mystrupper(str1);
    printf("mystrupper = %s\n", str1);

    mystrlower(str1);
    printf("mystrlower = %s\n", str1);

    mystrrev(str1);
    printf("mystrrev = %s\n", str1);

    return 0;
}