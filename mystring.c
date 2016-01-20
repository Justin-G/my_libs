#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"

int mystrlen(char * str){
	int len=0;
	char * pstr=str;
	while(*pstr != '\0'){
		pstr++;
		len++;
	}
	return len;
	
}//求字符串长度
int mystrcmp(char * fstr,char * sstr)//比较2个字符串是否一样
{
	int res=0;
	char *pfstr = fstr,*psstr=sstr;
	while(*pfstr != '\0'){
		if(*pfstr > *psstr)
			return 1;
		else if(* pfstr < * psstr)
			return -1;
		else{
			pfstr++;
			psstr++;
		}
	}
	return 0;
}
char * mystrcat(char * fstr,char * sstr)//字符串连接操作
{
	char *pfstr = fstr,*psstr = sstr;
	if(*psstr == '\0')
		return NULL;
	while(*pfstr != '\0'){
		pfstr++;
	}
	while(*psstr != '\0'){
		*pfstr = *psstr;
		pfstr++;
		psstr++;
	}
	pfstr = '\0';
	return fstr;
}
char * mystrncat(char * fstr,char * sstr,unsigned int num)//字符串连接操作(前n个字符)
{
	int i=0,fnum=0;
	char * pfstr=fstr,* psstr=sstr;
	if(*psstr == '\0' || num <= 0)
		return NULL;
	while(*pfstr != '\0'){
		pfstr++;
	}
	while(*psstr != '\0' && i<num){
		*pfstr = * psstr;
		pfstr++;
		psstr++;
		i++;
	}
	*pfstr = '\0';
	return fstr;
}
char * mystrcpy(char * fstr,char * sstr)//字符串拷贝操作
{
	char * pfstr=fstr,*psstr=sstr;
	if(*psstr == '\0')
		return NULL;
	while(*psstr != '\0'){
		*pfstr = *psstr;
		pfstr++;
		psstr++;
	}
	*pfstr = '\0';
	return fstr;
}
char * mystrncpy(char * fstr,char * sstr,unsigned int num)//字符串拷贝操作(前n个字符)
{
	int i=0;
	char * pfstr = fstr,*psstr = sstr;
	if(*psstr == '\0' || num <=0)
		return NULL;
	while(*psstr != '\0' && i < num){
		*pfstr = *psstr;
		pfstr++;
		psstr++;
		i++;
	}
	*pfstr = '\0';
	return fstr;
}
char * mystrchr(char * str,char ch)//查询字串
{
	char * pstr = str;
	if(*pstr == '\0' || ch == '\0' )
		return NULL;
	while(*pstr != '\0'){
		if(*pstr == ch)
			return pstr;
		pstr++;
	}
	return NULL;
}
char * mystrstr(char * fstr,char * sstr)//查询子串
{	int num=0,cnum=0;
	char * pfstr = fstr, * psstr = sstr;
	while(*pfstr != '\0'){
		pfstr += num;
		while(*pfstr == * psstr){
			pfstr++;
			psstr++;
			cnum++;
			if(*psstr == '\0')
				return pfstr-cnum;
		}
		num++;
		cnum=0;
		psstr = sstr;
	}
	return NULL;
}
