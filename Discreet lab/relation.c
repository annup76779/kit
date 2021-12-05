#include<stdio.h>
#include<conio.h>

void whois(){
    printf("Name: Anurag Pandey\n");
    printf("Roll no. : 21165BTLCS010\n");
    printf("Branch: CSE\n");
    printf("Year: 2nd\n");
    printf("Section: B\n");
    printf("Group: G2\n");
    printf("------------------------------------------\n");
    printf("\nProgram Name: Cartesian product of two sets.\n");
    printf("*******************************************\n");
}

// take an int type array of size given by the user
void take_array(int arr[], int size){
    printf("Please enter the following %d elements of the set:\n", size);
    for (int x=0; x<size; x++)
        scanf("%d",&arr[x]);
}

// function to check if any value is present in the given set or not
int value_in(int value, int set[], int current_index){
    for (int x = 0; x < current_index; x++){
        if (value == set[x])
            return 1;
    }
    return 0;
}

void main(){
    whois();

    //taking the size of each array from the user
    int lenA, lenB;
    printf("Enter the size of set A: ");
    scanf("%d", &lenA);
    printf("Enter the size of set B: ");
    scanf("%d",&lenB);

    // making two sets
    int setA[lenA];take_array(setA, lenA);
    int setB[lenB];take_array(setB, lenB);

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
    printf("Set A -\n");
    for (int x = 0; x < lenA; x++) printf("%d ", setA[x]);
    printf("\nSet B -\n");
    for (int y = 0; y < lenB; y++) printf("%d ", setB[y]);

    //printing the Cartesian product set
    printf("\nFinal Set after Cartesian product:\n");
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