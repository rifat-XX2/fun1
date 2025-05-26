
// problem 1

#include<stdio.h>
int main (){
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array in reverse:\n");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

    return 0;
}

//problem 2
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of integers:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers:",n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum of all numbers in the array = %d",sum);

    return 0;
}


//problem 3
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of integers:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d integers:",n);

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
        sum+=arr[i];
        }
    }

    printf("Sum of even numbers in the array = %d",sum);

    return 0;
}

//problem 4

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of integers:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d integers:",n);

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i%2==0){
        sum+=arr[i];
        }
    }

    printf("Sum of even indexed numbers in the array = %d",sum);

    return 0;
}

//problem 5

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of integers:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d integers:",n);

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("Array in reverse: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}


// problem 6

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integer numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int max_index = 0;
    int min_index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    printf("Max: %d, Index: %d\n", max, max_index);
    printf("Min: %d, Index: %d\n", min, min_index);

    return 0;
}

//problem 7

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of alphabets: ");
    scanf("%d", &n);

    char alphabetArr[n];
    printf("Enter %d alphabets (uppercase or lowercase): ", n);
    for (int i = 0; i < n; ++i) {
        scanf(" %c", &alphabetArr[i]);
        alphabetArr[i] = toupper(alphabetArr[i]);
    }

    int vowelCount = 0;
    for (int i = 0; i < n; ++i) {
        char ch = alphabetArr[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            ++vowelCount;
        }
    }

    printf("Total vowel count: %d\n", vowelCount);
    return 0;
}
*/
//problem 8
#include <stdio.h>

int main() {
    int n,searchNum;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &searchNum);

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchNum) {
            printf("FOUND at index position: %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("NOT FOUND");
    }

    printf("\n");

    return 0;
}







