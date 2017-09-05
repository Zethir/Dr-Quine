#include <stdio.h>
#include <fcntl.h>
#define WRITE(fd,s) dprintf(fd,s,10,9,34,s)
#define OPEN() open("Grace_kid.c",O_CREAT|O_WRONLY,0644)
#define MAIN(s) int main(){WRITE(OPEN(),s);}
/*
	COMMENT
*/
MAIN("#include <stdio.h>%1$c#include <fcntl.h>%1$c#define WRITE(fd,s) dprintf(fd,s,10,9,34,s)%1$c#define OPEN() open(%3$cGrace_kid.c%3$c,O_CREAT|O_WRONLY,0644)%1$c#define MAIN(s) int main(){WRITE(OPEN(),s);}%1$c/*%1$c%2$cCOMMENT%1$c*/%1$cMAIN(%3$c%4$s%3$c)%1$c")
