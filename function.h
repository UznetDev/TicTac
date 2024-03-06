void PrintArr(){
    puts("");
    puts("");
    for (int i = 0; i < n; i++)
    {
        printf("\t        ", i + 1);
        for(int j = 0;j < n; j++)
            printf("%c     ", arr[i][j]);
        puts("\n");
    }
    puts("");
}

bool Change(int son){
    if(son > 0 && son < 10){
        son = son - 1;
        if(arr[0][son] > 48 && arr[0][son] < 58){
            arr[0][son] = 'O';
            return true;
        }else{
            printf("\nBu xona band!\n");
            return false;
        }
    }
    else{
        printf("\nBu xona mavjud emas!\n");
        return false;
    }
}