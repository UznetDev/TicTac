void Randoms(){

    if (arr[1][1] == 53){
        arr[1][1] = 'X';
    }

    srand(time(NULL));
    int x = 0;
    for (int i = 0; i < n*n; i++){
        if(arr[0][i] > 48 && arr[0][i] < 58){
            x++;
        }
    }
    int res = rand() % x + 1;
    int step = 0;
    for (int i = 0; i < n*n; i++){
        if(arr[0][i] > 48 && arr[0][i] < 58){
            if(step == res){
                arr[0][i] = 'X';
                break;
            }
            step++;
        }
    }
}

//////////////// XXXXXXXXXXX

void PutX1(){
    // Put X1---
    int y = 0;
    for (int i = 0; i < 3; i++)     
        if(arr[i][0] > 48 && arr[i][0] < 58){
            arr[i][0] = 'X';
            y = 1;
            break;
        }
    if(y == 0){
        Randoms();
    }
}

void PutX2(){
    // Put X2---
    int y = 0;
    for (int i = 0; i < 3; i++)     
        if(arr[i][1] > 48 && arr[i][1] < 58){
            arr[i][1] = 'X';
            y = 1;
            break;
        }
    if(y == 0){
        Randoms();
    }
}

void PutX3(){
    // Put X3---
    int y = 0;
    for (int i = 0; i < 3; i++)     
        if(arr[i][2] > 48 && arr[i][2] < 58){
            arr[i][2] = 'X';
            y = 1;
            break;
        }
    if(y == 0){
        Randoms();
    }
}

///// YYYYYYYYY

void PutY1(){
    // Put Y1---
    int y = 0;
    for (int i = 0; i < 3; i++)     
        if(arr[0][i] > 48 && arr[0][i] < 58){
            arr[0][i] = 'X';
            y = 1;
            break;
        }
    if(y == 0){
        Randoms();
    }
}

void PutY2(){
    // Put Y2---
    int y = 0;
    for (int i = 0; i < 3; i++)     
        if(arr[1][i] > 48 && arr[1][i] < 58){
            arr[1][i] = 'X';
            y = 1;
            break;
        }
    if(y == 0){
        Randoms();
    }
}

void PutY3(){
    // Put X1---
    int y = 0;
    for (int i = 0; i < 3; i++)     
        if(arr[2][i] > 48 && arr[2][i] < 58){
            arr[2][i] = 'X';
            y = 1;
            break;
        }
    if(y == 0){
        Randoms();
    }
}

///// x y

void PutX(){
    int res = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(i == j)
                if(arr[i][j] > 48 && arr[i][j] < 58){
                    arr[i][j] = 'X';
                    res = 1;
                    return;
                }
    if(res == 0)
        Randoms();
}

void PutY(){
    int res = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(i + j == n - 1)
                if(arr[i][j] > 48 && arr[i][j] < 58){
                    arr[i][j] = 'X';
                    res = 1;
                    return;
                }
    if(res == 0)
        Randoms();
}