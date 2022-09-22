//# include <stdio.h>
// int main(){
// 	1.字面常量 1 3 4 5
//  2.const修饰的常变量 
// 	// const - 常属性
//	// const修饰的常变量 (不能修改值)
//	
//	const int num = 4;  // num是变量，但是又是常属性，所以num是常变量 
//	printf("%d\n",num);
//	num = 8;
//	printf("%d",num);
//
//	
// }
 
//# include <stdio.h>
////  3 .#define 定义的标识符变量
//
//#define MAX 10 
//int main(){
//	int arr[MAX] = {0};
//	printf("%d",MAX);
//	return 0; 	
// }
# include <stdio.h>
// 枚举常量 
enum Sex{
	MALE,FEMAL,SECRET
}; 
int main(){
 //  4. 枚举常量
//  枚举：一一列举
//性别：男、女、保密
//三原色：红、黄、蓝 
//	enum Sex s = FEMAL;
	printf("%d\n",MALE);
	printf("%d\n",FEMAL);
	printf("%d\n",SECRET);
	return 0; 

}
