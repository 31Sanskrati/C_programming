#include <stdio.h>

int main()
{
    int n;
    printf("Enter a num\n");
    scanf("%d", &n);
    
    int row = (n*2)-1;
    
    int start = 0;
    int end = row-1;
    int arr[row][row];
    
    while(n!=0){
        for(int i = start; i<=end; i++){
            for(int j = start; j<=end; j++){
                if(i == start || i == end || j==start || j==end){
                    arr[i][j] = n;
                }
            }
        }
        ++start;
        --end;
        --n;
    }
    
    for(int i = 0; i<row; i++){
        for(int j = 0; j< row; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
