#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if((c>96&&c<123)||(c>64&&c<91))
        printf("Alphabet");
    else
        printf("No");
    return 0;
}
