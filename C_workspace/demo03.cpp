# include<stdio.h>
# include<string.h>
//int main(){
//	//数据在计算机上存储的时候，存储的是二进制 
//	//ASCALL编码 
//	char arr1[]="abc";
//	char arr2[]={'a','b','c','\0'};
//	//字符串的结束标志是一个 \0 转义字符。在计算字符串长度的时候 \0 是结束标志，不算字符串的内容。 
//	printf("%s\n",arr1);
//	printf("%s",arr2);
//	return 0;
//}
int main(){
	char arr1[]="abc";
	char arr2[]={'a','b','c'};
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));
	printf("%d\n",strlen("c:\test\32\test.c")); // \t（水平制表符）为转义字符（转变为原来的意思） 
	printf("%c\n",'\32'); // '\+数字'为八进制 
	printf("%c\n",'\132'); //ASCALL码为 90 的字符 
	// |32（被解析为一个转义）--32是2个8进制数字 
	//32作为8进制代表的十进制数字，作为ASCALL码值对应的字符
	//32-->10进制 26 ->ASCALL码代表的字符 
	printf("%c\n",'\x61');  //2个十六进制的转义字符 
	return 0;
} 
