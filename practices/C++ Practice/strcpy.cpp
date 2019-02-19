#include <cstdio>
#include <cstring>
int main(){
    char str1[100] = "This is a string";
    char str2[100], str3[100];
    strcpy(str2,str1);
	strcpy(str3,"copy unsuccessful");
	printf("str1: %s\nstr2: %s\nstr3: %s",str1,str2,str3);
    return 0;
}