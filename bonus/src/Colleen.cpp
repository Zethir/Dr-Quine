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
const char *s="#include <stdio.h>%1$c/*%1$c%2$cOUTSIDE COMMENT%1$c*/%1$cvoid useless_function(){}%1$cint main(){%1$c/*%1$c%2$cINSIDE COMMENT%1$c*/%1$cuseless_function();%1$cconst char *s=%3$c%s%3$c;%1$cprintf(s,10,9,34,s);}%1$c";
printf(s,10,9,34,s);}
