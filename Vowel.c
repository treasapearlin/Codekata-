#include<stdio.h>
int main()
{
  char c;
  scanf("%c",&c);
  if(c>=65&&c<=90||c>=97&&c<=122)
  {
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        printf("Vowel");
    else
        printf("Consonant");
    }
    else
    printf("Invalid");
    return 0;
}
