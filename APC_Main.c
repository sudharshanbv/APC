

#include <stdio.h>
#include <Dlist.h>

int main()
{

char expression[1024];
Dlist_t *var1 = NULL, *var2 = NULL;

printf("\nEnter the expression :\n\n");
scanf("\n%[^\n]", expression);

slice(expression, &var1, &var2);
}
