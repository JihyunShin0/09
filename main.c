#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(int argc, char *argv[])
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 6};
    int flag_same = 1;
    
    for (i = 0 ; i < SIZE ; i++)
    {
        if (a[i] != b[i])
        {
            printf("���� �ٸ� ���� ���� �ε��� : %d\n", i);
            flag_same = 0;
        }
    }
    
    if ( flag_same )
         printf("�迭�� ���� ���� �����ϴ�.\n");
    else 
         printf("�迭�� �ٸ� ���� �����ϴ�.\n");
    
    #if 0
    int grade[SIZE];
    int score[SIZE]; 
    
    for (i = 0 ; i < SIZE ; i++)
        grade[i] = rand() % 100;
        
    for (i = 0 ; i < SIZE ; i++)
        score[i] = grade[i];
    
    for ( i = 0 ; i < SIZE ; i++)
        printf("grade[%i] = %i, score[%i] = %i\n", i, grade[i], i, score[i]);
     
     
    if ( score == grade )
         printf("�迭�� ���� ���� �����ϴ�.\n");
    else 
         printf("�迭�� �ٸ� ���� �����ϴ�.\n");   
    #endif
    
    
    system("PAUSE");	
    return 0;
}

