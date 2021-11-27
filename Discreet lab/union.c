#include <stdio.h>
#include <conio.h>

// function to check if any value is present in the given set or not
int value_in(int value, int set[], int len){
    for (int x = 0; x < len; x++){
        if (value == set[x])
            return 1;
    }
    return 0;
}

// function to get the intersection of the two sets
int doUnion(int setA[], int setB[], int final_set[], int lenA, int lenB, int final_set_length){
    int final_set_index = 0;
    for (int i = 0; i < lenA; i++) {
        if (!value_in(setA[i], final_set, final_set_length)){
            final_set[final_set_index] = setA[i];
            final_set_index++;
        }
    }
    for (int j = 0; j < lenB; j++){
        if (!value_in(setB[j], final_set, final_set_length)){
            final_set[final_set_index] = setB[j];
            final_set_index++;
        }
    }
    return final_set_index;
}

void main(){
    // makin two sets
    int setA[] = {1, 2, 2, 3, 7, 5, 11};
    int setB[] = {4, 5, 6};

    // finding the length of the two sets
    int lenA = sizeof(setA)/sizeof(setA[0]);
    int lenB = sizeof(setB)/sizeof(setB[0]);

    int interset_set_length = lenA + lenB;
    int union_[interset_set_length];
    int final_set_size;
    final_set_size = doUnion(setA, setB, union_, lenA, lenB, interset_set_length);

    printf("Name: Anurag Pandey\n");
    printf("Roll no. : 21165BTLCS010\n");
    printf("Year: 2nd\n");
    printf("Section: B\n");
    printf("Group: G2\n");
    printf("------------------------------------------\n");
    printf("\nProgram Name: Union of two sets.\n");
    printf("*******************************************\n");

    printf("Set A -\n");
    for (int x = 0; x < lenA; x++) printf("%d ", setA[x]);
    printf("\nSet B -\n");
    for (int y = 0; y < lenB; y++) printf("%d ", setB[y]);

    printf("\nFinal Set after union:\n");
    for (int i = 0; i < final_set_size; i++){
        if (union_[i])
            printf("%d ", union_[i]);
    }
    getch();
}