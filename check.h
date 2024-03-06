int CheckX1(){
    // check X1---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[i][0] == 'X')
            return 0;
        if(arr[i][0] == 'O')
            x1++;
    }
    return x1;
}

int CheckX2(){
    // check X2---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[i][1] == 'X')
            return 0;
        if(arr[i][1] == 'O')
            x1++;
    }
    return x1;
}

int CheckX3(){
    // check X3---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[i][2] == 'X')
            return 0;
        if(arr[i][2] == 'O')
            x1++;
    }
    return x1;
}


// YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY


int CheckY1(){
    // check Y1---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[0][i] == 'X')
            return 0;
        if(arr[0][i] == 'O')
            x1++;
    }
    return x1;
}

int CheckY2(){
    // check Y2---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[1][i] == 'X')
            return 0;
        if(arr[1][i] == 'O')
            x1++;
    }
    return x1;
}

int CheckY3(){
    // check Y1---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[2][i] == 'X')
            return 0;
        if(arr[2][i] == 'O')
            x1++;
    }
    return x1;
}

// ??????????????????????? X y


int CheckX(){
    int res = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(i == j){
                if(arr[i][j] == 'X')
                    return 0;
                if(arr[i][j] == 'O')
                    res++;
            }
    return res;
}


int CheckY(){
    int res = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(i + j == n - 1){
                if(arr[i][j] == 'X')
                    return 0;
                if(arr[i][j] == 'O')
                    res++;
            }
    return res;
}