#include<stdio.h>
 void swap1(int x,int y);
 void swap2(int *x,int *y);
 void swap1(int x,int y)
 {    
     int temp;
     printf("In swap1,����ǰ��x=%d,y=%d\n",x,y);
     temp=x;
     x=y;
     y=temp;
     printf ("In swap1,������x=%d,y=%d\n",x,y);
  } 
 void swap2(int *x,int *y)
 {    
     int temp;
     printf("In swap2,����ǰ��x=%d,y=%d\n",*x,*y);
     temp=*x;
     *x=*y;
     *y=temp;//�����ĵ�ַ�Ƕ�Ӧ��ֵ 
     printf ("In swap2,������x=%d,y=%d\n",*x,*y);
  } 
 int main()
 {
 	  int a=3,b=5;
 	  printf("In main,����ǰ��a=%d,b=%d\n",a,b);
 	  swap1(a,b);
/*�������øö���Ľ���������ʵ��ab�����β�xy��xy��Ϊ�ֲ�����
ֻ�����ں����ṹ�ڣ��Ӷ����˸ýṹ����һ�������ab����int main
����ṹ�еĲ���ab,��ֵ��δ��Ϊswep1�����ڵľֲ��βθı���ı�*/ 
 	  printf("In main,������a=%d,b=%d\n",a,b);
 	  
 	  printf("In main2,����ǰ��a=%d,b=%d\n",a,b);
	  swap2(&a,&b);
/*�˴��������ṹ�в���ab�ĵ�ַ����swap2�����У���ͨ��swap2�е�ָ��
����*x,*y����Ӧab��ַ�е���ֵ��������Ȼʹab��Ӧ�Ĳ���ֵҲ�ı䡣 

**���庯��ʱ��ʹ��ָ���������⣬����ʹ�����飨ps:�������������һ����ַ
������&a�ṹ����
������ֻ�轫swap1�е�xy��Ϊx[10],y[10],main�����ж�������a[],b[]������
swap1(a,b)���䣨����ͬ�ڱ�ʾab�ĵ�ַ��*/ 
 	  printf("In main2,������a=%d,b=%d\n",a,b);
 	  return 0;
  } 
