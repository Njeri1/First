#include <stdio.h>
//MARY NJERI NYORO

main()
{
    int i, difference, number, odd_num = 0, even_num = 0;
    float onethird, onefifth;
    printf("write down your uperbound\n ");
    scanf("%d", &number);

    for (i=1; i<=number; i++)
    {
        if(i %2 == 0)
            even_num = even_num + i;
        else
            odd_num = odd_num + i;

    }
    onethird = even_num /3;
    onefifth = odd_num /5;
    difference = even_num - odd_num;
    if (difference < 0){
        difference = difference *-1;
    }


    printf("sum of all even numbers = %d\n", even_num);
    printf("sum of all odd numbers = %d\n", odd_num);
    printf("the absolute difference between the sums is = %d\n", difference);
    printf("a third of the sums of the odd numbers is = %f\n", onethird);
    printf("a fifth of the sums of the even numbers is = %f\n", onefifth);

    return 0;
}