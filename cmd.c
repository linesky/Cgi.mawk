#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void scommand(char *a){
	system(a);
}
void sline(char *a){
	char c[2080];
	FILE *f1;
	f1=stdin;
	if(f1==NULL)exit(1);
		while(1){
			fgets(c,2070,f1);
			if (strcmp(c,"\n\0")==0) break;
			scommand(c);
		}
	
}
int main(int argc,char *argv[]){
	//if (argc<2)exit(1);
	
	sline("stdin");
}
