#include <stdio.h>
#include <conio.h>

void whois(){
    printf("Name: Anurag Pandey\n");
    printf("Roll no. : 21165BTLCS010\n");
    printf("Branch: CSE\n");
    printf("Year: 2nd\n");
    printf("Section: B\n");
    printf("Group: G2\n");
    printf("------------------------------------------");
    printf("\nProgram Name: Difference of two sets.\n");
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

    int diff_[lenA];
    int final_set_size;
    final_set_size = diff(setA, setB, diff_, lenA, lenB, lenA);

    printf("Set A -\n");
    for (int x = 0; x < lenA; x++) printf("%d ", setA[x]);
    printf("\nSet B -\n");
    for (int y = 0; y < lenB; y++) printf("%d ", setB[y]);

    printf("\nFinal Set after difference:\n");
    for (int i = 0; i < final_set_size; i++){
        if (diff_[i])
            printf("%d ", diff_[i]);
    }
    getch();
} 