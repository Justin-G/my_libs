#ifndef _MYSTRING
#define _MYSTRING
int mystrlen(char *);//求字符串长度
int mystrcmp(char *,char *);//比较2个字符串是否一样
char * mystrcat(char * ,char *);//字符串连接操作
char * mystrncat(char *,char *,unsigned int );//字符串连接操作(前n个字符)
char * mystrcpy(char *,char *);//字符串拷贝操作
char * mystrncpy(char *,char *,unsigned int);//字符串拷贝操作(前n个字符)
char * mystrchr(char *,char);//查询字串
char * mystrstr(char *,char *);//查询子串

#endif
