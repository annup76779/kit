#include <stdio.h>
#include <conio.h>

void whois(){
    printf("Name: Anurag Pandey\n");
    printf("Roll no. : 21165BTLCS010\n");
    printf("Branch: CSE\n");
    printf("Year: 2nd\n");
    printf("Section: B\n");
    printf("Group: G2\n");
    printf("------------------------------------------\n");
    printf("\nProgram Name: Symmetric difference of two sets.\n");
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

// function to get the difference of setA with setB
int diff(int setA[], int setB[], int final_set[], int lenA, int lenB, int final_set_length){
    int final_set_index = 0;
    int key;
    for (int i = 0; i < lenA; i++) {
        key = 0;
        for (int j = 0; j < lenB; j++){
            if (setA[i] == setB[j]){
                key = 1;
                break;
            }
        }
        if (!key && !value_in(setA[i], final_set, final_set_index)){
            final_set[final_set_index] = setA[i];
            final_set_index++; 
        }
    }
    return final_set_index;
}

// function to get the union of the two sets
int doUnion(int setA[], int setB[], int final_set[], int lenA, int lenB, int final_set_length){
    int final_set_index = 0;
    for (int i = 0; i < lenA; i++) {
        final_set[final_set_index] = setA[i];
        final_set_index++;
    }
    for (int j = 0; j < lenB; j++){
        final_set[final_set_index] = setB[j];
        final_set_index++;
    }
    return final_set_index;
}

void main(){
    // printing the student detail.
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

    int diff_1[lenA];
    int diff_2[lenB];

    int diff_1_set_size, diff_2_set_size;
    diff_1_set_size = diff(setA, setB, diff_1, lenA, lenB, lenA);
    diff_2_set_size = diff(setB, setA, diff_2, lenB, lenA, lenB);
    printf("%d %d", diff_1_set_size, diff_2_set_size);

    int interset_set_length = diff_1_set_size + diff_2_set_size;
    int symtter_diff[interset_set_length];
    int symtter_diff_size;
    symtter_diff_size = doUnion(diff_1, diff_2, symtter_diff, diff_1_set_size, diff_2_set_size, interset_set_length);

    printf("Set A -\n");
    for (int x = 0; x < lenA; x++) printf("%d ", setA[x]);
    printf("\nSet B -\n");
    for (int y = 0; y < lenB; y++) printf("%d ", setB[y]);
   
    printf("\nFinal Set after Symmetric Difference:\n");
    for (int i = 0; i < symtter_diff_size; i++){
        if (symtter_diff[i])
            printf("%d ", symtter_diff[i]);
    }
    getch();
}