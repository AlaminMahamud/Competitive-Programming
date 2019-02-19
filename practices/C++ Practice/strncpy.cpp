#include <cstdio>
#include <cstring>
int main(){
	char a[100] = "This is a string";
	char b[100], c[100];
	strncpy(b,a,sizeof(a));
	strncpy(c,b,5);
	c[5] = '\0';
	puts(a);
	puts(b);
	puts(c);
	return 0;
}