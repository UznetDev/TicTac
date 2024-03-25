
char arr[3][3] = {{'1', '2', '3'},
                  {'4', '5', '6'},
                  {'7', '8', '9'}};
int n = 3;
#include "function.h"
#include "check.h"
#include "brain.h"

int main()
{   
    PrintArr();
    while (true)
    {
        int res;

        printf("\nXonanani tanlang: ");
        scanf("%d", &res);
        bool ch = Change(res);
        if(!ch)
            continue;
        
        int check_x = CheckX();
        int check_y = CheckY();

        int check_x_1 = CheckX1();
        int check_x_2 = CheckX2();
        int check_x_3 = CheckX3();

        int check_y_1 = CheckY1();
        int check_y_2 = CheckY2();