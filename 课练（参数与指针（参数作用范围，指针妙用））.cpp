#include<stdio.h>
 void swap1(int x,int y);
 void swap2(int *x,int *y);
 void swap1(int x,int y)
 {    
     int temp;
     printf("In swap1,交换前：x=%d,y=%d\n",x,y);
     temp=x;
     x=y;
     y=temp;
     printf ("In swap1,交换后：x=%d,y=%d\n",x,y);
  } 
 void swap2(int *x,int *y)
 {    
     int temp;
     printf("In swap2,交换前：x=%d,y=%d\n",*x,*y);
     temp=*x;
     *x=*y;
     *y=temp;//交换的地址是对应的值 
     printf ("In swap2,交换后：x=%d,y=%d\n",*x,*y);
  } 
 int main()
 {
 	  int a=3,b=5;
 	  printf("In main,交换前：a=%d,b=%d\n",a,b);
 	  swap1(a,b);
/*由于引用该定义的交换函数后，实参ab带人形参xy后，xy作为局部参数
只作用于函数结构内，从而出了该结构后，下一行输出的ab还是int main
这个结构中的参量ab,其值并未因为swep1函数内的局部形参改变而改变*/ 
 	  printf("In main,交换后：a=%d,b=%d\n",a,b);
 	  
 	  printf("In main2,交换前：a=%d,b=%d\n",a,b);
	  swap2(&a,&b);
/*此处将整个结构中参数ab的地址用于swap2函数中，并通过swap2中的指针
变量*x,*y将对应ab地址中的数值交换，自然使ab对应的参数值也改变。 

**定义函数时除使用指针作参数外，还可使用数组（ps:数组名本身就是一个地址
类似于&a结构。）
·例，只需将swap1中的xy改为x[10],y[10],main函数中定义数组a[],b[]但引用
swap1(a,b)不变（及等同于表示ab的地址）*/ 
 	  printf("In main2,交换后：a=%d,b=%d\n",a,b);
 	  return 0;
  } 
