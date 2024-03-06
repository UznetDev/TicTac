

int CheckMyX1(){
    // check X1---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[i][0] == 'O')
            return 0;
        if(arr[i][0] == 'X')
            x1++;
    }
    return x1;
}

int CheckMyX2(){
    // check X2---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[i][1] == 'O')
            return 0;
        if(arr[i][1] == 'X')
            x1++;
    }
    return x1;
}

int CheckMyX3(){
    // check X3---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[i][2] == 'O')
            return 0;
        if(arr[i][2] == 'X')
            x1++;
    }
    return x1;
}


// YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY


int CheckMyY1(){
    // check Y1---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[0][i] == 'O')
            return 0;
        if(arr[0][i] == 'X')
            x1++;
    }
    return x1;
}

int CheckMyY2(){
    // check Y2---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[1][i] == 'O')
            return 0;
        if(arr[1][i] == 'X')
            x1++;
    }
    return x1;
}

int CheckMyY3(){
    // check Y1---
    int x1 = 0;
    for (int i = 0; i < 3; i++){
        if(arr[2][i] == 'O')
            return 0;
        if(arr[2][i] == 'X')
            x1++;
    }
    return x1;
}

// ??????????????????????? X y


int CheckMyX(){
    int res = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(i == j){
                if(arr[i][j] == 'O')
                    return 0;
                if(arr[i][j] == 'X')
                    res++;
            }
    return res;
}


int CheckMyY(){
    int res = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(i + j == n - 1){
                if(arr[i][j] == 'O')
                    return 0;
                if(arr[i][j] == 'X')
                    res++;
            }
    return res;
}