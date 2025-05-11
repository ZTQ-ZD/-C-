#include <stdio.h>
#include <string.h>
int main()
{
    //char arr[] = "hello";//字符数组-数组是一组同类型的元素
    //字符串在结尾的位置影藏了一个'\0'字符
    //字符串是一个字符数组，最后一个元素是'\0'，表示字符串的结束
    char arr1[] = "abc";
    char arr2[] = {'a', 'b', 'c','\0' }; 
    
    //求一下字符串的长度
    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));
   // int len = strlen("abc");//\0不计入字符串长度
   // printf("%d\n", len);
    //打印字符串
    //printf("%s\n", arr1);
    //printf("%s\n", arr2);
    return 0;
}