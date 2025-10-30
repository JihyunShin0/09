#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(int argc, char *argv[])
{
    int i, average;
    int sum;
    int grade[SIZE];
    
    sum = 0;
    
    for (i = 0 ; i < SIZE ; i++)
    {
        printf("점수를 입력하세요. \n");
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
        
    average = sum / SIZE;
    printf("성적 평균 : %d\n", average); 
    
    #if 0
    for ( i = 0 ; i < SIZE ; i++)
        printf("grade[%i] = %i\n", i, grade[i]);
    #endif
    
    system("PAUSE");	
    return 0;
}

