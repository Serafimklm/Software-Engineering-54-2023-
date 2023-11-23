#include <stdio.h> 
int main()
{
 int num;
 printf("Digite o n?mero: ");
 scanf ("%d", &num);
 printf("\n O antecessor ?: %d", num-1);
 printf("\n O sucessor ?: %d", num+1);
 return (0);
}