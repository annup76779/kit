#include<stdio.h>
#include<conio.h>

void main(){
    int setA[] = {1,2,3,4};
    int setB[] = {98, 6, 54, 23};

    // finding the length of the given two sets
    int lenA = sizeof(setA)/sizeof(setA[0]);
    int lenB = sizeof(setB)/sizeof(setB[0]);

    int cols = lenA * lenB;
    // final set dimensions
    int finalSet[cols][2];
    int count = 0;

    for (int i = 0; i < lenA; i++){
        for (int j = 0; j < lenB; j++){
            if (setA[i] == setB[j])
                continue;
            finalSet[count][0] = setA[i];
            finalSet[count][1] = setB[j];
            count++;
        }
    }

    // printing the output
    printf("Name: Awantika Yadav\n");
    printf("Roll no. : 21165BTLCS013\n");
    printf("Year: 2nd\n");
    printf("Section: B\n");
    printf("Group: G2\n");
    printf("------------------------------------------\n");
    printf("\nProgram Name: Relation of two sets.\n");
    printf("*******************************************\n");

    printf("Set A -\n");
    for (int x = 0; x < lenA; x++) printf("%d ", setA[x]);
    printf("\nSet B -\n");
    for (int y = 0; y < lenB; y++) printf("%d ", setB[y]);

    //printing the relation set
    printf("\nFinal Relation Set after union:\n");
    printf("{");
    for (int i=0; i<cols; i++){
        printf("(");
        for(int j = 0;j<2;j++){
            printf("%d",finalSet[i][j]);
            if (j == 0)
                printf(", ");
        }
        printf(")");
        if (!(i == cols-1))
            printf(", ");
    }
    printf("}");
}