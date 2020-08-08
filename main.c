#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n*n];
    for(int i=0;i<n*n;i++){
        arr[i] = i+1;
    }
    int mat[n][n];
    int top = 0, 
        bottom = n - 1, 
        left = 0, 
        right = n - 1; 
  
    int index = 0; 
  
    while (1) { 
  
        if (left > right) 
            break; 
  
        
        for (int i = left; i <= right; i++)// print top row 
            mat[top][i] = arr[index++]; 
        top++; 
  
        if (top > bottom) 
            break; 
  
         
        for (int i = top; i <= bottom; i++)// print right column
            mat[i][right] = arr[index++]; 
        right--; 
  
        if (left > right) 
            break; 
  
         
        for (int i = right; i >= left; i--)// print bottom row
            mat[bottom][i] = arr[index++]; 
        bottom--; 
  
        if (top > bottom) 
            break; 
  
         
        for (int i = bottom; i >= top; i--)// print left column
            mat[i][left] = arr[index++]; 
        left++; 
    } 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    // printf("\n");
    int count = 1;
    
    int totalItr = n*n/11 +1;
    printf("Total Power points : %d\n",totalItr);
    printf("(0,0)\n");
    while(totalItr--){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==11*count){
                    printf("(%d,%d)\n",i,j);
                    count++;
                }
            }
        }
    }
    

}