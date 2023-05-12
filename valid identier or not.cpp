#include<stdio.h>
#include<ctype.h>
int main()
{
char a[10];
printf("\n Enter an identifier:");
gets(a);
if(isalpha(a[0]))
{
printf("\n Valid identifier");
}
else
{
printf("\n Not a valid identifier");
}
return 0;
}
