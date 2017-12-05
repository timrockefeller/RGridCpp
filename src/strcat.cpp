#include<iostream>
#include<iomanip>
using namespace std;


char * mystrcat(char *str1, char *str2) {
	char *p;
	for (p = str1; *p != '\0'; p++);
	for (; *str2 != '\0'; p++, str2++)
		*p = *str2;
	*p = '\0';
	return str1;
}

int main() {
	char* str1 = "", *str2 = "", *cur, *ans;

	//cin>>str1>>str2;

	char c;
	for (cur = str1; (c = getchar()) != '\n'; cur++) {
		*cur = c;
	}
	*cur = '\0';
	for (cur = str2; (c = getchar()) != '\n'; cur++) {
		*cur = c;
	}
	*cur = '\0';
	ans = mystrcat(str1, str2);

	cout << str1;
	return 0;
}