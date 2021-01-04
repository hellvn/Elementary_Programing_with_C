#include <stdio.h>

int main() {
   char s[30];
   int i = 0;
   int vow = 0;
   printf("Nhap van ban bat ky: \n-");
   gets(s);
      
   while(s[i++] != '\0') {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
         vow++;
   }
   
   printf("Chuoi '%s' co chua: \t%d nguyen am", s, vow);

   return 0;
}

