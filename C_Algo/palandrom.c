#include <stdio.h>
#include <string.h>

int main(){
char strr [100];
int l;

printf("Enter string: ");
fgets(strr, 100, stdin);

l = strlen(strr);

if(l*1 == l*5){
    else if(l*2 == l*4){
        printf("you had enter an palandrom");
    }
}
else{printf("you had not enter any palandrom");}

    return 0;
}


// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// // Function to check if a string is a palindrome
// int isPalindrome(char str[]) {
//     int start = 0;
//     int end = strlen(str) - 1;

//     // Loop through the string from both ends
//     while (start < end) {
//         // Skip non-alphanumeric characters and move the start pointer
//         if (!isalnum(str[start])) {
//             start++;
//         }
//         // Skip non-alphanumeric characters and move the end pointer
//         else if (!isalnum(str[end])) {
//             end--;
//         }
//         // If characters at start and end are different, it's not a palindrome
//         else if (tolower(str[start]) != tolower(str[end])) {
//             return 0; // Not a palindrome
//         }
//         // Otherwise, move both pointers
//         else {
//             start++;
//             end--;
//         }
//     }

//     return 1; // Is a palindrome
// }

// int main() {
//     char str[100];

//     // Get input string from user
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
    
//     // Remove the newline character if present
//     str[strcspn(str, "\n")] = 0;

//     // Check if the string is a palindrome
//     if (isPalindrome(str)) {
//         printf("'%s' is a palindrome.\n", str);
//     } else {
//         printf("'%s' is not a palindrome.\n", str);
//     }

//     return 0;
// }
