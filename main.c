#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

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
        int check_y_3 = CheckY3();

        bool f = true;
        for (int i = 0; i < n*n; i++)
        {
            if(arr[0][i] > 48 && arr[0][i] < 58){
                f = false;
                break;
            }
        }
        if(f){
            PrintArr();
            printf("\nDustlik g'alaba qozondi!");
            break;
        }

        Brain(check_x_1, check_x_2, check_x_3, check_y_1, check_y_2, check_y_3, check_x, check_y);

        check_x = CheckX();
        check_y = CheckY();

        check_x_1 = CheckX1();
        check_x_2 = CheckX2();
        check_x_3 = CheckX3();

        check_y_1 = CheckY1();
        check_y_2 = CheckY2();
        check_y_3 = CheckY3();

        // Ckeck x
        if((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') || (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') || (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')){
            PrintArr();
            printf("\nCampiyuter yutdi\n");
            return 0;
        }
        // Check Y
        else if((arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') || (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') || (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')){
            PrintArr();
            printf("\nCampiyuter yutdi\n");
            return 0;
        }
        // Check y
        else if(arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X'){
            PrintArr();
            printf("\nCampiyuter yutdi\n");
            return 0;
        }
        // Check x
        else if(arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X'){
            PrintArr();
            printf("\nCampiyuter yutdi\n");
            return 0;
        }
        else if(check_x_1 == 3 || check_x_2 == 3 || check_x_3 == 3 || check_y_1 == 3 || check_y_2 == 3 || check_y_3 == 3 || check_x == 3 || check_y == 3){
            PrintArr();
            printf("\nTabriklayman siz yutdingiz!\n");
            return 0;
        }
        
        PrintArr();
    }
}
