# include<stdio.h>
# include<string.h>
//int main(){
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢���Ƕ����� 
//	//ASCALL���� 
//	char arr1[]="abc";
//	char arr2[]={'a','b','c','\0'};
//	//�ַ����Ľ�����־��һ�� \0 ת���ַ����ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־�������ַ��������ݡ� 
//	printf("%s\n",arr1);
//	printf("%s",arr2);
//	return 0;
//}
int main(){
	char arr1[]="abc";
	char arr2[]={'a','b','c'};
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));
	printf("%d\n",strlen("c:\test\32\test.c")); // \t��ˮƽ�Ʊ����Ϊת���ַ���ת��Ϊԭ������˼�� 
	printf("%c\n",'\32'); // '\+����'Ϊ�˽��� 
	printf("%c\n",'\132'); //ASCALL��Ϊ 90 ���ַ� 
	// |32��������Ϊһ��ת�壩--32��2��8�������� 
	//32��Ϊ8���ƴ����ʮ�������֣���ΪASCALL��ֵ��Ӧ���ַ�
	//32-->10���� 26 ->ASCALL�������ַ� 
	printf("%c\n",'\x61');  //2��ʮ�����Ƶ�ת���ַ� 
	return 0;
} 
