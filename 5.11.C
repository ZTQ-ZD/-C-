//1.选择语句
/*
#include <stdio.h>
int main()
{
    int input = 0;//输入的值
    printf("工作以后:>");
    printf("你要好好学习吗(1/0)?>:");
    scanf("%d", &input);
    if(input == 1)
        printf("不断地进步\n");
    else
        printf("你真是个懒人\n");
       
    return 0;
} 
*/   

//2.循环语句
/*
#include <stdio.h>
int main()
{
    int line = 0;
    //循环
    while(line < 3000)
    {
        printf("继续加油:%d\n", line);
        line++;
    }
    if (line == 3000)
    {
        printf("你很棒\n");
    }
    
    return 0;
}
*/
/*
#include <stdio.h>
//函数
int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z; 

}
int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d%d", &num1, &num2);
    
    //int sum = num1 + num2;
    //函数的方法解决
    int sum = Add(num1, num2);
    printf("%d\n", sum);
    return 0;
}
*/
//数组- 一组相同类型的元素的集合
#include <stdio.h>
int main()
{
  //10个整形1-10存起来
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//数组的创建
  char ah[5] = {'a', 'b', 'c'};//字符数组的创建
  int i = 0;
  while (i < 10)
  {
    printf("%d\n", arr[i]);
    i++;
  }
    return 0;
}

