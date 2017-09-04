#include <stdio.h>
/*
 	OUTSIDE COMMENT
*/
void useless_function(){}
int main(){
/*
 	INSIDE COMMENT
*/
useless_function();
char *s="#include <stdio.h>%1$c/*%1$c%2$cOUTSIDE COMMENT%1$c*/%1$cvoid useless_function(){}%1$cint main(){%1$c/*%1$c%2$cINSIDE COMMENT%1$c*/%1$cuseless_function();%1$cchar *s=%3$c%s%3$c;%1$cprintf(s,10,9,34,s);}";
printf(s,10,9,34,s);}
