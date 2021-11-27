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
int get_intersection(int setA[], int setB[], int final_set[], int lenA, int lenB, int final_set_length){
    int final_set_index = 0;
    for (int i = 0; i < lenA; i++) {
        for (int j = 0; j < lenB; j++){
            if (setA[i] == setB[j]){
                if (!value_in(setA[i], final_set, final_set_length)){
                    final_set[final_set_index] = setA[i];
                    final_set_index++;
                }
            }
        }
    }
    return final_set_index;
}

void main(){
    // makin two sets
    int setA[] = {1,2, 2, 2, 3, 9, 11, 23};
    int setB[] = {11, 23, 1, 2, 3, 9, 78, 9};

    // finding the length of the two sets
    int lenA = sizeof(setA)/sizeof(setA[0]);
    int lenB = sizeof(setB)/sizeof(setB[0]);

    int interset_set_length = (lenA <= lenB) ? lenA : lenB;
    int intersection[interset_set_length];
    int len;
    len = get_intersection(setA, setB, intersection, lenA, lenB, interset_set_length);

    printf("Name: Anurag Pandey\n");
    printf("Roll no. : 21165BTLCS010\n");
    printf("Year: 2nd\n");
    printf("Section: B\n");
    printf("Group: G2\n");
    printf("------------------------------------------\n");
    printf("\nProgram Name: Intersection of two sets.\n");
    printf("*******************************************\n");

    printf("Set A -\n");
    for (int x = 0; x < lenA; x++) printf("%d ", setA[x]);
    printf("\nSet B -\n");
    for (int y = 0; y < lenB; y++) printf("%d ", setB[y]);

    printf("\nFinal Set after intersection:\n");
    for (int i = 0; i < len; i++){
        if (intersection[i])
            printf("%d ", intersection[i]);
    }
    getch();
}