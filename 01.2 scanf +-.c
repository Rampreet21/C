#include <stdio.h>

int main ()
{
    char name[10];
    int age;
    char add[124];
    unsigned long con;          // long long con; ezi (%lld)
    printf("Enter Your Information\n");
    printf("NAME: ");
    scanf("%s", name);
    printf("AGE: ");
    scanf("%d", &age);
    printf("ADDRESS: ");
    scanf("%s", add);
    printf("CONTACT: ");
    scanf("%lu", &con);
    printf("     %s Information\n", name);  
    printf("NAME: %s\nAGE: %d\nADDRESS: %s\nCONTACT: %lu", name, age, add, con);  

    return 0;
}