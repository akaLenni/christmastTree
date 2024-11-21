#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randTreeHeight(void) {
    
    int min = 3;
    int max = 17;
    int getRandomHeight = (rand() % (max - min + 1)) + min;
    
    return getRandomHeight;
}

char randDecoration(void) {
    
    char decoration[] = {'x', 'X', 'o', 'O', '*'};
    int getRandomDecoration = rand() % 5;
    char randDeco = decoration[getRandomDecoration];

    return randDeco;
}

void buildTree(void) {
    /*
        careful -1 added -> needs testing!
    */
    int width = 41;
    int treeHeight = randTreeHeight() - 1;
    int amountDecoration;
    int counter;

    printf("%*c", 19, " ");
    printf("\\ /\n");

    printf("%*c", 18, " ");
    printf("- ");

    printf("%c", randDecoration());

    printf(" -\n");

    printf("%*c", 19, " ");
    printf("/|\\\n");

    printf("%*c", 20," ");
    printf("A\n");

    int helperVar;
    int weight1 = 70;
    int weight2 = 30;
    int totalWeight = weight1 + weight2;
    int randomWeight;
    counter = 1;  

    for(counter = 1; counter < treeHeight; counter++) {
        amountDecoration = (counter*2) + 1;
        helperVar = amountDecoration;

        int amountEmptySpaces = (width - amountDecoration)/2;
        printf("%*c", amountEmptySpaces, " ");

            for(amountDecoration;amountDecoration > 0; amountDecoration--) {
                randomWeight = rand() % totalWeight;
                if(amountDecoration == helperVar) {
                    if(randomWeight <= 30) {
                        printf("*");
                        
                    } else {
                        printf("/");
                        
                    }

                } else if(amountDecoration == 1) {
                    if(randomWeight <= 30) {
                        printf("*");
                        
                    } else {
                        printf("\\");
                        
                    }
                    
                } else {
                    printf("%c", randDecoration());
                    
                }

            }
        
        printf("\n");

    }
    printf("%*c", 19," ");
    printf("|||\n");


}



int main(void){

    srand((unsigned int)time(NULL));
    buildTree();

    return 0;
}
