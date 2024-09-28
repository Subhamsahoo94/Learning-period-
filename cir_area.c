//find are of a curcle---
#include <stdio.h>
#include <conio.h>

int main()
{

    int r;// radious of the circle 
    float a;// area of the circle
    clrscr();
    printf("\t ******AREA OF CIRCLE******");
    printf("\n\n\nenter the radius of circle: ");
    scanf("%d",&r);
    a= r * r *3.14;
    printf("\n\t---------soloution------------");
    printf("\n\narea of circle is: %f",a);
    return 0;
    getch();

}