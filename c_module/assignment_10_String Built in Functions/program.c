#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    int len, cmp;

    // 1 strlen()
    len = strlen(str1);
    printf("1. Length of str1 = %d\n", len);

    // 2 strcpy()
    strcpy(str3, str1);
    printf("2. strcpy = %s\n", str3);

    // 3 strcat()
    strcat(str1, str2);
    printf("3. strcat = %s\n", str1);

    // 4 strcmp()
    cmp = strcmp("abc", "abc");
    printf("4. strcmp = %d\n", cmp);

    // 5 strncmp()
    cmp = strncmp("abcd", "abcf", 3);
    printf("5. strncmp = %d\n", cmp);

    // 6 strchr()
    printf("6. strchr = %s\n", strchr(str1, 'W'));

    // 7 strrchr()
    printf("7. strrchr = %s\n", strrchr(str1, 'l'));

    // 8 strstr()
    printf("8. strstr = %s\n", strstr(str1, "World"));

    // 9 strtok()
    char s1[] = "C-Java-Python";
    char *token = strtok(s1, "-");

    printf("9. strtok = ");
    while(token != NULL)
    {
        printf("%s ", token);
        token = strtok(NULL, "-");
    }
    printf("\n");

    // 10 memcpy()
    char a[20] = "Programming";
    char b[20];
    memcpy(b, a, strlen(a)+1);
    printf("10. memcpy = %s\n", b);

    // 11 memmove()
    char m1[20] = "Hello";
    memmove(m1 + 2, m1, 5);
    printf("11. memmove = %s\n", m1);

    // 12 memcmp()
    printf("12. memcmp = %d\n", memcmp("abc", "abd", 3));

    // 13 memset()
    char m2[10] = "abcdef";
    memset(m2, '*', 3);
    printf("13. memset = %s\n", m2);

    // 14 strspn()
    printf("14. strspn = %d\n", strspn("abc123", "abc"));

    // 15 strcspn()
    printf("15. strcspn = %d\n", strcspn("abc123", "123"));

    // 16 strpbrk()
    printf("16. strpbrk = %s\n", strpbrk("hello", "oe"));

    // 17 strerror()
    printf("17. strerror = %s\n", strerror(2));

    // 18 strdup()  (may not work in some compilers)
    char *dup = strdup("Duplicate");
    printf("18. strdup = %s\n", dup);

    // 19 strrev()  (compiler dependent)
    char rev[20] = "Hello";
    printf("19. strrev = %s\n", strrev(rev));

    // 20 strlwr() (compiler dependent)
    char low[20] = "HELLO";
    printf("20. strlwr = %s\n", strlwr(low));

    // 21 strupr() (compiler dependent)
    char up[20] = "hello";
    printf("21. strupr = %s\n", strupr(up));

    return 0;
}