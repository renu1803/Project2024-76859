#include <stdio.h>
#include <string.h>

void lexicographical_Sort(char arr[][100], int n){
char str_cpy[100];
    
  for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
          if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(str_cpy, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], str_cpy);
           }
       }
   }
}

int main() {
   
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
   
    char strings[n][100];
    printf("Enter %d strings:\n", n);
  
    for (int i = 0; i < n; i++) {
         scanf("%s", strings[i]);
    }

lexicographical_Sort(strings, n);
    
printf("Strings in lexicographical order:\n");
   
   for (int i = 0; i < n; i++) {
      printf("%s\n", strings[i]);
    }
    
    return 0;
}
