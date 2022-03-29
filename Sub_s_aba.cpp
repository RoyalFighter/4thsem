#include <stdio.h>
#include <string.h>
void checkDFA(char s[] ) {
   // storing initial state
   int initialState = 0;
   //assign initial state to previous state.
   int previousState = initialState;
   int finalState;
   for(int i = 0; i < strlen(s); i++)    {
      if((previousState == 0 && s[i] == 'a') || (previousState == 1 && s[i] == 'a')) {
         finalState = 1;
      }
      if((previousState == 0 && s[i] == 'b') || (previousState == 2 && s[i] == 'b')) {
         finalState = 0;
      }
      if(previousState == 1 && s[i] == 'b') {
         finalState = 2;
      }
      if((previousState == 2 && s[i] == 'a') || (previousState == 3)) {
         finalState = 3;
      }
      previousState = finalState;
   }
   if(finalState == 3) {
      printf("given string is Accepted");
   }
   else
   {
      printf("given string is Not Accepted");
   }
}
int main() {
   // Given string
   char s[40];
   printf("implementation of DFA which having a sub string 'aba':\n enter a string:");
   scanf("%s",s);
   checkDFA(s);
   return 0;
}
