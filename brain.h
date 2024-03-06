#include "puts.h"
#include "check_me.h"

void Brain(int x1, int x2, int x3, int y1, int y2, int y3, int x, int y)
{
    int check_my_x = CheckMyX();
    int check_my_y = CheckMyY();

    int check_my_x_1 = CheckMyX1();
    int check_my_x_2 = CheckMyX2();
    int check_my_x_3 = CheckMyX3();

    int check_my_y_1 = CheckMyY1();
    int check_my_y_2 = CheckMyY2();
    int check_my_y_3 = CheckMyY3();

    // printf("\nX %d\n", check_my_x);
    // printf("Y %d\n", check_my_y);

    // printf("X1 %d \n", check_my_x_1);
    // printf("X2 %d \n", check_my_x_2),
    // printf("X3 %d \n", check_my_x_3);

    // printf("Y1 %d \n", check_my_y_1);
    // printf("Y2 %d \n", check_my_y_2),
    // printf("Y3 %d \n", check_my_y_3);

    if (check_my_x == 2)
        PutX();
    else if (check_my_y == 2)
        PutY();
    else if (check_my_x_1 == 2)
        PutX1();
    else if (check_my_x_2 == 2)
        PutX2();
    else if (check_my_x_3 == 2)
        PutX3();
    else if (check_my_y_1 == 2)
        PutY1();
    else if (check_my_y_2 == 2)
        PutY2();
    else if (check_my_y_3 == 2)
        PutY3();
    else
    {
        if ((y1 > y2 && y1 > y3 && y1 > x1 && y1 > x2 && y1 > x3 && y1 > x && y1 > y) || (y1 == 2))
            PutY1();
        else if ((y2 > y1 && y2 > y3 && y2 > x1 && y2 > x2 && y2 > x3 && y2 > x && y2 > y) || (y2 == 2))
            PutY2();
        else if ((y3 > y1 && y3 > y2 && y3 > x1 && y3 > x2 && y3 > x3 && y3 > x && y3 > y) || (y3 == 2))
            PutY3();
        else if ((x1 > y1 && x1 > y2 && x1 > y3 && x1 > x2 && x1 > x3 && x1 > x && x1 > y) || (x1 == 2))
            PutX1();
        else if ((x2 > y1 && x2 > y2 && x2 > y3 && x2 > x1 && x2 > x3 && x2 > x && x2 > y) || (x2 == 2))
            PutX2();
        else if ((x3 > y1 && x3 > y2 && x3 > y3 && x3 > x1 && x3 > x2 && x3 > x && x3 > y) || (x3 == 2))
            PutX3();
        else if ((x > y1 && x > y2 && x > y3 && x > x1 && x > x2 && x > x3 && x > y) || (x == 2))
            PutX();
        else if ((y > y1 && y > y2 && y > y3 && y > x1 && y > x2 && y > x3 && y > x) || (y == 2))
            PutY();
        else
            Randoms();
    }


}
