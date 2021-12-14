#include <stdio.h>

int count(char* px){ //returns number of character in a line
    int n = 0;
    while(*px != '\0'){
        n++;
        px++;
    }
    return n; 
}

void middle(int numL, int numC, char* px){ //takes number of lines and number of chars and buf for input
    printf("+ ");
    for(int i=0; i<numC; i++){
        if(*px == '\n'){
            printf(" ");
        }
        else{
            printf("%c", *px); //prints the char
            px++;
        }
    
    }
    printf(" +\n");
}

void topBottom(int numC){ //takes number of lines and chars for input
    printf("++");
    for(int i=0; i<numC; i++){
        printf("+");
    }
    printf("++\n");
}


int main(){
    int lineCount; // 5
    char buf[100][100];
    
    scanf("%d", &lineCount);
    
    int loopExit = 0;
    int max = 0;
    int charCount = 0;

    for(int i=0; i< lineCount; i++){
        int c = 0;
        while(fgets(buf[i], 100, stdin) && loopExit == 0){
            if(buf[i][c] == '\n'){
                loopExit++;
            }
            c++;
        }
       
        charCount = count(buf[i]);
        charCount = charCount - 1;
        if(max < charCount){
            max = charCount;
        }
    }

    //gives print statements
    topBottom(max);
    for(int i=0; i<lineCount; i++){
        middle(lineCount, max, buf[i]);
    }
    topBottom(max);
}