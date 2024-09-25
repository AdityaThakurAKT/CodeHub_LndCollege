#include<stdio.h>
int main (){
   char ch;
   float a,b, result;
   printf("\t\33[92m*chandu calculator*\n");
   printf("\t...................\n");
   printf("\n\n\33[91m 1.enter first no:");
   scanf("%f",&a);
   printf("  \33[93m enter the op:");
   scanf(" %c",&ch);
   printf("\33[94m2.enter second no:");
   scanf("%f",&b);
   printf("\n\n");
   switch (ch)
   {
   case '+':
   result=a+b;
   printf("result=%f\n", result);
   break;
   case '*':
   result=a*b;
   printf("result=%f\n", result);
   break;
  case '-':
   result=a-b;
   printf("result=%f\n", result);
  break;
  case '/':
  if (b!=0){
   result=a/b;
   printf("result=%f\n", result);
   }
   else
   printf("\33[95mzero is not viled");
  break;
  default:
  printf("inviled number");
  break;
  return 0;
}
}
