// #include<stdio.h>
// // float main(){printf("hello\nc");}
// #define MSSG "hello world\n"
// int main(void)
// {
//     printf(MSSG);
//     printf("siya");
//     return 0;
// }
//************************************************************* */
/*~-tilde
!-factorial or exclamation
#-hash
$-dollar
^-caret sign
&-ampersand
*-astrisk
(-left bracket
)-right bracket
_-underscore
- hyphen
=-equals to
< less than 
>- greater than
,-comma
.-period
{-left braces
}- right braces
|-vertical bar
\-reverse slash
/-forward slash
:-colon
;- semi colon
"-double quotes
"-same
?-question mark
`*/
// *************************************************************************
/*escape sequence character
\a-alert
\b-backspace
\t-horizontal tab
\n-new charcter line
\v-vertical tab
\r-carriage return 
\0-null character
\\-backslash
\-form feed*/
// #include<stdio.h>
// int main()
// {
    // printf("hello\nraja\n");
    // printf("hello\rraja\n");
    // printf("hello\traja\n");
    // printf("hello\vraja\n");
    // printf("hello\fraja\n");
    // printf("hello\braja\n");
    // printf("hello\0raja\n");
    // printf("\\raja\n");
    // printf("hello\aking");

// }
/* 
delimiters:- are used for syntactic purposes in c
like
:-end of label
;-end of statement
()-used in expressions
[]-used for arrays
{}- used for block of statements
#-preprocessor directive
,-variable delimiter
*/
// ************************************************************
// reserved words or also saying keywords
/*there are only thirty two keywords in c
1.float
2.int
3.double
4.long double
5.short
6.signed
7.unsigned
8.char
9.string
10.void
11.for
12.while
*/
// write a program to print ASCII value 
// #include<stdio.h>
// int main(){
//     char a=65;
//     printf("%c",a);
//     }
// // code no 2
// #include<stdio.h>
// int main()
// {
//     int a='A';
//     printf("%d",a);
// }
// write a program to find out the size of and limits of data types..
// #include<stdio.h>
// #include<limits.h>
// #include<float.h>
// int main()
// // {   printf("size of char=%u\n" ,sizeof(char));
// //     printf("size of float=%u\n" ,sizeof(float));
// //     printf("size of int=%u\n" ,sizeof(int));
// //     printf("size of double=%u\n" ,sizeof(double));
// //     printf("size of short=%u\n" ,sizeof(short));
// //     printf("size of long double=%u\n" ,sizeof(long double));

// // }
// {
//     printf("SCHAR_MAX=%d\n",SCHAR_MAX);
//     printf("SCHAR_MIN=%d\n",SCHAR_MIN);
//     printf("UCHAR_MAX=%d\n",UCHAR_MAX);
//     printf("SHRT_MAX=%d\n",SHRT_MAX);
//     printf("SHRT_MIN=%d\n",SHRT_MIN);
//     printf("USHRT_MAX=%d\n",USHRT_MAX);
//     printf("INT_MIN=%d\n",INT_MIN);
//     printf("UINT_MAX=%u\n",UINT_MAX);
//     printf("LONG_MAX=%d\n",LONG_MAX);
//     printf("LONG_MIN=%d\n",LONG_MIN);
//     printf("FLT_MAX=%e\n",FLT_MAX);
//     printf("FLT_MIN=%e\n",FLT_MIN);
//     printf("FLT_DIG=%d\n",FLT_DIG);
//     printf("LDBL_DIG=%d",DBL_DIG);
// }
// constants-constant is a value that cannot be changed during execute of a program
/*there are three types of constants
1.numeric constant-integer,real constants
2.string constant
3.character constant*/ 
// #include<stdio.h>
// #define pi "hello"
// int main()
// {   int a=45;
//     printf(pi);
    
// }
/*write a program to print from decimal to binary,octal,hexadecimal from user*/
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("the octal number is %o from decimal number %d\nthe hexadecimal number is %x ",n,n);
// }
// #include<stdio.h>
// int main()
// // {
// //     int a=023;
// //     printf("%d",a);

// // }
// {
//     int a=0x12;
//     printf("%d",a);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     char value='A',value2='B';
//     int value1=100;
//     printf("%d\n%c\n%d",value,value1,value2);
// }
// string- is a constant enclosed with in double quotes
// #include<stdio.h>
// int main()
// {
//     char s[] = "hello world radhe is the student of aktu";
//     printf("%s",s);
// } 
// #include<stdio.h>
// #define NAME "DIPANSHU"
// int main()
// {
//     printf(NAME);
// }
// #include<stdio.h>
// int main()
// {
//     char a=68,b=73,c=80,d=65,e=78,f=83,g=72,h=85;
//     printf("%c%c%c%c%c%c%c%c",a,b,c,d,e,f,g,h);
// }
/* convert int to float*/
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%f",(float)n);
// }
// convert float into int 
// #include<stdio.h>
// int main()
// {
//     float a;
//     scanf("%f",&a);
//     printf("%d",(int)a);
// }
// important float into float
// #include<stdio.h>
// int main()
// {
//     float a;
//     scanf("%f",&a);
//     int value=(int)a;
//     printf("%f\n",a);
//     printf("%f",(float)value);
// }
// write a float number into a exponential form
// #include<stdio.h>
// int main()
// {
//     float i=2223.547;
//     printf("%e",i);
    
// }
// conclusion - if point shifted towards left side then +ve
// if point shifted towards right side then -ve with contains 0 like 1 then 01.
// e or E will same but in capital E prints in form E.
// #include<stdio.h>
// int main()
// {
//     float a=67.797856;
//     printf("%g",a);
// }
// what is the difference between %i and %d
// %i takes input in form of decimal,octal,hexa or other type and gives output in same way like input is 012 then gives output 10.to see ex. at under this definition..
// %d takes input only in form of decimal and gives output in form of decimal..
// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%i",&a);
//     printf("%i",a);
// }
// #include<stdio.h>
// int main()
// {
//     int a=32767
//     ;
//     printf("%ld",a);
// }
// #include<stdio.h>
// int main()
// {
//     float a=13.5783;
//     printf("%e",a);
// }
// write a program to print a string 
// #include<stdio.h>
// int main()
// {
//     char radhe[]="shiva is the international hero";
//     printf("%s",radhe);
// }
// #include<stdio.h>
// int main()
// {
//     float a=23.756338;
//     printf("%g",a);
// }
// #include<stdio.h>
// int main()
// {
//     char radhe[9];
//     printf("enter your thoughts:");
//     scanf("%s",&radhe);
//     printf("%s",radhe);

// }
// #include<stdio.h>
// int main()
// {
//     char ch='dpuyts';
//     int age=17;
//     printf("%0c\n%d",ch,age);
// }
// #include<stdio.h>
// int main()
// {
//     char name[]="dipanshu";
//     int age=18;
//     printf("%s\n%d",name,age);
// }
/*if we use char data type to print a name then char print last value of the long string e.g."dipanshu"
char print last element u because in char char is only working on single character
but in next code using string data type when print a huge value like name,20-30 words sentence.*/
// #include<stdio.h>
// int main()
// {
//     int basic;
//     float hra;
//     char grade;
//     scanf("%d%f%c",&basic,&hra,&grade);
// }
// #include<stdio.h>
// int main()
// {
//     int a=234;
//     float b=45.87;
//     printf("%d:%f",a,b);

// }
// some c problems in c
// #include<stdio.h>
// int main()
// {
//     if(printf("dipanshu\n"))
//     {
//     }
//     while(printf("hello dipanshu")){}
// }
// #include<stdio.h>
// int main()
// {
//     int a,b,c,y;
//     scanf("%d\n%d\n%d",&a,&b,&c);
//     y=a+b+c;
//     printf("sum of three numbers=%d",y);
// }
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double p,r,a;
//     scanf("%d\n%d",&p,&r);
//     a=pow((1+(r/100)),2);
//     printf("%lf",a);
// }
// infinite loop
// #include<stdio.h>
// int main()
// {
//     int year,i;
//     scanf("%d",&year);
//     for(i=1, i<=year; i++;) {
//         if(i%400==0||i%4==0&&i%100!=0){
//             printf("%d\n",i);
//         }
//     }
// }
// #include <stdio.h>
// int main() {
//     int year, i;
//     scanf("%d", &year);
//     for (i = 1; i <= year; i++) {
//         if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) { 
//             printf("%d ", i);
//         }
//     }
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a,b,ratio;
//     scanf("%d\n%d",&a,&b);
//     ratio=a/b;
//     printf("ratio=%d\n",ratio);
//     if(ratio>0){
//         a=a+b;
//         b=a-b;
//         a=a-b;
//         printf("a=%d\nb=%d",a,b);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int arr[4]={54,76.7,75,76,};
//     printf("%d %d",arr[3],arr[2]);
// }
// #include<stdio.h>
// int main()
// {
//     int num_1;
//     int num_2;
//     scanf("%d",&num_1);
//     scanf("%d",&num_2);
//     if(num_1>num_2){
//         printf("num_1 is greater than num_2 ");
//         }
//     else
//     {
//         printf("num_2 is greater than num_1");
//     }
// }
// #include<stdio.h>
// int main()
// {
    
// }
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d""%d""%d",&a,&b,&c);
//     if(a>b)
//     {
//         if(a>c)
//           {
//             printf(" a is greater than a and c");
//           }
//         else
//           {
//             printf("c is greater than a and b");
//           }


//     }
//     else
//       {
//         if(b>c)
//             {
//             printf("b is greater than c and a");
//             }
//         else
//             {
//                 printf("c is greater than b and a");
//             }
//         }
         
      
// }
// #include<stdio.h>
// int main()
// {
//     int a,b,temp;
//     scanf("%d %d",&a,&b);
//     temp=b;
//     b=a;
//     a=temp;
//     printf("a=%d or b=%d",a,b);

// }
// #include<stdio.h>
// void main()
// {
//     int a=3;
//     int b=8;
//     a=a^b;
//     printf("%d\n",a);
//     b=a^b;
//     printf("%d\n",b);
//     a=a^b;
//     printf("%d\n",a);
//     printf("a=%d\nb=%d",a,b);
// }




// #include<stdio.h>
// void main()
// {
//     int a,b;
//     printf("enter the value of a:");
//     scanf("%d",&a);
//     printf("enter the value of b:");
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("a=%d b=%d",a,b);
// }
// #include<stdio.h>
// int main()
// {
//     int a=123;
//     printf("%d",(a%10)*100+(a/10));
// }
// #include<stdio.h>
// int main()
// {
//     int num,num1,num2,sum=0,sum1;
//     scanf("%d",&num);
//     num1=num/1000;
//     sum=sum+num1;
//     printf("%d",sum);
//     num2=num%1000;
//     sum1=num2;
//     printf("sum of first and last digit of that number= %d",sum+num2);


    
// }
// #include<stdio.h>
// int main()
// {
//     int num,a,a1,sum=0;
//     scanf("%d",&num);
//     a=num/10000;
//     sum=sum+a;
//     a1=num%10;
//     printf("%d",sum+a1);


// }
// #include<stdio.h>
// int main()
// {
//     int G,B,R;
//     scanf("%d",&B);
//     R=B*(40+20)/100;
//     G=B-R;
//     printf("%d",G);
// }
// #include<stdio.h>
// int main()
// {
//     int G,B,D,R;
//     scanf("%d",&B);
//     D=B*40/100;
//     R=B*20/100;
//     G=B+D+R;
//     printf("%d",G);

// }
// #include<stdio.h>
// int main()
// {
//     float x=2/2+2*6/2-2+3.5/3;
//     printf("%f",x);
// }
// #include<stdio.h>
// int main()
// {
//     int x=6/2+3*2-6*(3-2)+1*2/2;
//     printf("%d",x);
// }
// #include<stdio.h>
// int main()
// {
//     int a=11;
//     int b=23;
//     printf("%d",a!=b);
// }
// #include<stdio.h>
// int main()
// {
//     int i=4,j=-1,k=0,w,x,y,z;
//     w=i||j||k;
//     x=i&&j&&k;
//     y=i||j&&k;
//     z=i&&j||k;
//     printf("w=%d\nx=%d\ny=%d\nz=%d",w,x,y,z);
// }
// #include<stdio.h>
// int main()
// {
//   int i=4,j=-1,k=0,y,z;
//   y=i+5&&j+1||k+2;
//   z=i+5||j+1&&k+2;
//   printf("%d \n%d",y,z);
// }
// #include<stdio.h>
// int main()
// {
//   int i=-1,j=1,k,l;
//   k=!i&&j;
//   l=!i||j;
 
//   printf("%d \n%d",k,l);
// }
// #include<stdio.h>
// int main()
// {
//     int a;
//      a=10+20<30&&10-20<5;
//      printf("%d",a);
// }
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("a=");
//     scanf("%d",&a);
//     printf("b=");
//     scanf("%d",&b);
//     (a>b)?printf("a is greater than b"):printf("b is greater than a");
// }
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter the number of a:");
//     scanf("%d",&a);
//     printf("enter the number of b:");
//     scanf("%d",&b);
//     printf("enter the number of c:");
//     scanf("%d",&c);
//     (a>b)?(a>c?printf("a is greater than c"):printf("c is greater than b and c")):(b>c)?printf("b is greater than a nad c"):printf("c is greater than a and b");
// }
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter the value of a:");
//     scanf("%d",&a);
   
//     (a%2==0)?printf("number is even ..."):printf("number is odd");
// }
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("%d",sizeof(a));
// }
// #include<stdio.h>
// int main()
// {
//     int a=15;
//     int b=10;
//     printf("%d",a&b);
// }
// #include<stdio.h>
// int main()
// {
//     int a=5;
//     int b=1;
//     printf("%d\n",~b);
//     int c=a+(~b);
//     printf("%d",c);
// }
// #include<stdio.h>
// int main()
// {
//     int x=5;
//     int y=9;
//     printf("x=%d\ny=%d",x>>1,y<<2);
// }
// pre increment
// #include<stdio.h>
// int main()
// {
//     int a=10,b;
//     b=++a;
//     printf("a=%d\nb=%d",a,b);
// }
// post increment
// #include<stdio.h>
// int main()
// {
//     int a=10,b;
//     b=a++;
//     printf("a=%d\nb=%d",a,b);
// }
// #include<stdio.h>
// int main()
// {
//     int x=4,y,z;
//     y=--x;
//     z=x--;
//     printf("%d\n%d\n%d\n",x,y,z);
// }
// #include<stdio.h>
// int main()
// {
//     int x=4,y=3,z;
//     z=x---y;
//     printf("%d%d%d",x,y,z);
// }
// #include<stdio.h>
// int main()
// {
//     int a=2,b=4,c=12;
//     c=a=b;
//     printf("a=%d\nb=%d\nc=%d",a,b,c);
// }
// #include<stdio.h>
// int main()
// {
//     int a=10,b=5,c;
//     c=a++*--b;
//     printf("a=%d\nb=%d\nc=%d",a,b,c);
// }
// #include<stdio.h>
// int main()
// {
//     int a=10,b;
//     b=++a+a++;
//     printf("b=%d\na=%d",b,a);
// }
// #include<stdio.h>
// int main()
// {
//     int x=10;
//     int y;
//     y=--x + x--+x--;
//     printf("y is %d",y);
//     printf("\nxis%d",x);
// }
// #include<stdio.h>
// int main()
// {
//     int a=1,b=2,c=3;
//     int k;
//     k=(a++)*(++b)+ ++a-(--c);
//     printf("a=%d,b=%d,c=%d,k=%d",a,b,c,k);

// }
// #include<stdio.h>
// int main()
// {
//     int x=100;
//     printf("%d\n",10+x++);
//     printf("%d",10 + ++x);
// }
// #include<stdio.h>
// int main()
// {
//     int x=10,y=5,s1,s2;
//     s1=x+(++y);
//     s2=(++x)+(y++);
//     printf("s1=%d\ns2=%d\nx=%d\ny=%d",s1,s2,x,y);
// }
// #include<stdio.h>
// int main()
// {
//     int a=5;
//     a=a+(++a)+5;
//     printf("%d",a);
// }
// #include<stdio.h>
// int main()
// {
//     int a=1;
//     printf("%d\n",++a+a++);
//     printf("%d",a);
// }
// #include<stdio.h>
// int main()
// {
//     int a=5;
//     printf("%d",++a>=a++);
//     printf("\n%d",a);
// // }
// #include<stdio.h>
// int main()
// {
//     int a=2,b=3;
//     b=a++ + b--;
//     a=a-- + ++b;
//     b=++a + --b;
//     printf("a=%d\nb=%d",a,b);
// }
// #include<stdio.h>
// int main()
// {
//     int k=35;
//     printf("%d\n%d\n%d",k==35,k=50,k>35);
// }
// #include<stdio.h>
// int main()
// {
//     int a=10;
//     a=a+++a;
//     printf("%d",a);
// }
// #include<stdio.h>
// #include<math.h>
// void main()
// {
//     float sinx,cosx,tanx,x;
//     printf("enter the value of x:");
//     scanf("%f",&x);
//     sinx=sin(x*(3.142/180.0));
//     cosx=cos(x*(3.142/180.0));
//     tanx=tan(x*(3.142/180.0));
//     printf("sinx=%f\ncosx=%f\ntanx=%f",sinx,cosx,tanx);

// }
// #include<stdio.h>
// int main()
// {
//     int v=65;
//     printf("%c",v);
// }
// #include<stdio.h>
// int main()
// {
//     char c;
//     printf("c=");
//     scanf("%c",&c);
//     printf("ASCII value of this=%c is %d",c,c);
// }
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float km,m,cm,inches;
//     printf("enter the distance in km=");
//     scanf("%f",&km);
//     m=km*1000;
//     cm=km*1000*100;
//     inches=cm/2.54;
//     printf("m=%f\ncm=%f\ninches=%f",m,cm,inches);
// }
// #include<stdio.h>
// int main()
// {
//     int a,b,temp;
//     printf("enter the value of a=");
//     scanf("%d",&a);
//     printf("enter the value of b =");
//     scanf("%d",&b);
//     temp=b;
//     b=a;
//     a=temp;
//     printf("after swaping a=%d\nb=%d",a,b);
// }
// #include<stdio.h>
// int main()
// {
//     int amount,hun,fifty,ten;
//     printf("amount=");
//     scanf("%d",&amount);
//     ten=amount/10;
//     amount=amount%10;
//     fifty=amount/50;
//     amount=amount%50;
//     hun=amount/100;
    
//     amount=amount%100;
    
//     printf("hundred=%d\n",hun);
//     printf("fifty=%d\n",fifty);
//     printf("ten=%d",ten);
// }
// #include<stdio.h>
// int main()
// {
//     int num,a,n,new;
//     printf("enter a number:");
//     scanf("%d",&num);
//     a=num/10000+2;
//     n=num%10000;
//     new=new+a*10000;
//     a=n/1000+2;
//     n=n%1000;
//     new=new+a*1000;
//     a=n/100+2;
//     n=n%100;
//     new=new+a*100;
//     a=n/10+2;
//     n=n%10;
//     new=new+a*10;
//     a=n+2;
//     new=new+a;
//     printf("new number=%d",new);
// }
// #include<stdio.h>
// int main()
// {
//     float a=13.637;
//     int b= a;
//     printf("%d",b);
// }
// #include<stdio.h>
// int main()
// {
//     float sp,cp,profit,loss;
//     printf("enter a value of sp:");
//     scanf("%f",&sp);
//     printf("enter a value of cp:");
//     scanf("%f",&cp);
//     profit=sp-cp;
//     loss=cp-sp;
//     if(profit>0)
//     {
//         printf("profit=%f",profit);
//     }
//     if(loss>0)
//     {
//         printf("loss=%f",loss);
//     }
//     if(profit==0)
//     {
//         printf("equal=%f",profit);
//     }

// }
// #include<stdio.h>
// int main()
// {
//     int a,b,temp;
//     printf("enter the value of a:");
//     scanf("%d",&a);
//     printf("enter the value of b:");
//     scanf("%d",&b);
//     if(a/b>0)
//     {
//         temp=b;
//         b=a;
//         a=temp;
//         printf("after swapping\na=%d\nb=%d",a,b);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a=3,b=8;
//     if(a==3)
//     {
//         printf("a=%d",a);
//     }
//     else;
//     {
//         printf("\nb=%d",b);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("enter year:");
//     scanf("%d",&year);
//     if(year%4==0&&(year%400==0||year%100!=0))
//     {
//         printf("this year is leap year");
//     }
//     else
//     {
//         printf("its not leap year");
//     }

// }
// #include<stdio.h>
// int main()
// {
//     int days;
//     scanf("%d",&days);
//     if(days>=1&&days<=5)
//       {
//         printf("fine is=%d",days*50/100);
//       }
//     else if(days>=6&&days<=10)
//           {
//             printf("fine is=%d",days*1);
//           }
//     else if(days>=10&&days<=30)
//         {
//             printf("fine is=%d",days*5);
//         } 
//     else
//     {
//         printf("membership is cancelled on this account");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int days;
//     scanf("%d",&days);
//     if(days>=1&&days<=5)
//       {
//         printf("fine is=%d",days*50/100);
//       }
//     else 
//         if(days>=6&&days<=10)
//           {
//             printf("fine is=%d",days*1);
//           }
//     else 
//             if(days>=10&&days<=30)
//             {
//                 printf("fine is=%d",days*5);
//             } 
        
//     else
//     {
//         printf("membership is cancelled on this account");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int marks;
//     printf("enter your marks:");
//     scanf("%d",&marks);
//     if(marks<=40)
//     {
//         printf("fail");
//     }
//     else if(marks<=50)
//     {
//         printf("you got grade C");
//     }
//     else if(marks<=60)
//     {
//         printf("you got grade B");
//     }
//     else if(marks<=70)
//     {
//         printf("you got grade A");

//     }
//     else if(marks<=80)
//     {
//         printf("you got grade A+");
//     }
//     else
//     {
//         printf("you got grade O");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     char a=1;
//     switch(a)
//                 {
//                     case 1:
//                     printf("sexa");
//                     case 2:
//                     printf("sushant");
//                     default:
//                     printf("your brother ");
//                 }
// }
// #include<stdio.h>
// int main()
// {                 error case
//     char a=1;
//     switch(a)
//                 {
//                     case 1:
//                     printf("sexa");
//                     case 1:
//                     printf("sushant");
//                     default:
//                     printf("your brother ");
//                 }
// }
// #include<stdio.h>
// int main()
// {
//     int i=3;
//     switch(i)
//     {
//         case 1+0:
//             printf("\ngate academy");
//             break;
//         case 4/2:
//             printf("\nunacademy");
//             break;
//         case 8%5:
//             printf("engineers ki pathsala");
        
//     }
// }
// #include<stdio.h>
//  int main()
// {
//     int a;
//     printf("enter the week day");
//     scanf("%d",&a);
//     switch(a)
//     {
//         case 1:
//         printf("monday");
//         break;
//         case 2:
//         printf("tuesday");
//         break;
//         case 3:
//         printf("wednesday");
//         break;
//         case 4:
//         printf("thursday");
//         break;
//         case 5:
//         printf("friday");
//         break;
//         case 6:
//         printf("saturday");
//         break;
//         default:
//         printf("sunday masti");
//         break;


//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         printf("%d\n,",i);
//         i--;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int x=4;
//     while(x==1)
//     {
//         x=x-1;
//         printf("%d\n",x);
//         ++x;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int x=4,y,z;
//     y=--x;
//     z=x--;
//     printf("%d\n%d\n%d",x,y,z);
// }
// #include<stdio.h>
// int main()
// {                    we are not use break then print hello infinite times
//     while(-5)
//     {
//         printf("hello\n");
// //         break;
// //     }
// // }
// #include<stdio.h>
// int main()
// {
//     char c=120;
//     while(++c)
//     {
//         printf("%u\n",c);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("enter the value of i:");
//     scanf("%d",&i);
//     while(i<=100)
//     {
//         if(i%2==0)
//         {   
//             printf("even=%d\n",i);
//         }
//         i++;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=100)
//     {
//         if(i%2==0&&i%3==0)
//         {
//             printf("number is divisible by 2 and 3=%d\n",i);
//         }
//         i++;
//     }
// }
// #include<stdio.h> 
// int main()
// {
//     int num,i=1,fact=1;
//     printf("enter the value:");
//     scanf("%d",&num);
//     while(i<=num)
//     {
//         fact=fact*i;
//         i++;
        

//     }
//     printf("%d",fact);
// }
// #include<stdio.h>
// int main()
// {
//     int n,i,fact=1;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     i=n;
//     while(i!=0)
//     {
//         fact=fact*i;
//         i--;
//     }
//     printf("%d",fact);
// }
// #include<stdio.h>
// int main()
// {
//     // int i=0;   ASCII VALUE ALL CHARACTERS
//     while(i<=255)
//     {
//         printf("%c=%d\n",i,i);
//         i++;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i=1,r,a,sum;
//     while(i<=500)
//     {
//         r=i%10;
//         a=i%100;
//         a=(a-r)/10;
//         sum=i/100;
//         if(sum*sum*sum+a*a*a+r*r*r==i)
//         {
//             printf(" no. is armstrong i=%d\n",i);
           
//         }
//         i++;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int num,a,b,c;
//     printf("enter a number:");
//     scanf("%d",&num);
//     a=num%10;
//     b=num%100;
//     b=(b-a)/10;
//     c=num/100;
//     if(c*c*c+b*b*b+a*a*a==num)
//     {
//         printf("number is armstrong");
//     }
//     else
//     {
//         printf("number is not armstrong");
//     }

// }
// #include<stdio.h>
// int main()
// {                    without using while loop
//     int num,a,b,c;
//     printf("enter a number:");
//     scanf("%d",&num);
//     a=num%10;
//     b=num%100;
//     b=(b-a)/10;
//     c=num/100;
//     printf("%d%d%d",a,b,c);
// }
// #include<stdio.h>
// int main()           reverse number
// {
//     int num,r,sum=0;
//     printf("enter a number:");
//     scanf("%d",&num);
//     while(num>0)
//     {
//         r=num%10;
//         sum=sum*10+r;
//         num=num/10;
//     }
//     printf("%d",sum);

// }
// #include<stdio.h>
// int main()           same as reverse number but something changed 
// {
//     int num,r,sum=0;
//     printf("enter a number:");
//     scanf("%d",&num);
//     while(num>0)
//     {
//         r=num%10;
//         sum=sum+r;
//         num=num/10;
//     }
//     printf("sum of the number=%d",sum);

// }
// #include<stdio.h>
// int main()
// {
//     int n,i=1,j;
//     printf("enter number of lines:");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         j=1;
//         while(j<=i)
//         {
//             printf("*");
//             j++;
//         }
//         i++;
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n,i=1,j;
//     printf("enter number of lines:");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         j=1;
//         while(j<=i)
//         {
//             printf("%d",i);
//             j++;
//         }
//         i++;
//         printf("\n");
//     }
// }
// #include<stdio.h>
// void main()
// {
//     int num,i=1,j;
//     printf("enter the number:");
//     scanf("%d",&num);
//     while(i<=num)
//     {
//         j=1;
//         while(j<=i)
//         {
//             printf("%c",j+64);
//             j++;

//         }
//         i++;
//         printf("\n");

//     }



// }
// #include<stdio.h>
// void main()
// {
//     int num,i=1,j;
//     printf("enter the number:");
//     scanf("%d",&num);
//     while(i<=num)
//     {
//         j=1;
//         while(j<=i)
//         {
//             printf("%c",j+96);
//             j++;

//         }
//         i++;
//         printf("\n");

//     }
// }
// #include<stdio.h>
// void main()
// {
//     int n,i=1,j;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         j=1;
//         while(j<=i)
//         {
//             printf("%d",j%2);
//             j++;
//         }
//         i++;
//         printf("\n");
//     }
// }
// #include<stdio.h>
// void main()
// {
//     int n,i=1,j;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         j=1;
//         while(j<=n)
//         {
//             printf("*");
//             j++;
//         }
//         i++;
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int num,r,s,sum;
//     printf("enter the value of num:");
//     scanf("%d",&num);
//     r=num%10;
//     s=num%100;
//     s=(s-r)/10;
//     sum=num/100;
//     printf("%d%d%d",r,s,sum);
//     if(sum==num)
//     {
//         printf("number is palindrome");
//     }
//     else
//     {
//         printf("number is not palindrome");
//     }




// }
// #include<stdio.h>
// int main()
// {
//     int n,i=1,j;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         j=1;
//         while(j<=n)
//         {
//             printf("%d",j);
//             j++;
//         }
//         i++;
//         printf("\n");
//     }

// }
// do while loop 
// syntax
// do
// {
//     statement;
// }
// while(condition);   using semi colon in this loop
// #include<stdio.h>
// int main()
// {
//     int x=0;
//     do
//     {
//         x++;
//         printf("%d\n",x);
//     }
//     while(x<3);
//     printf("hello radhe");
// }
// #include<stdio.h>
// int main()
// {
//     int x=0;
//     do
//     {
//         x++;
//         printf("%d\n",x);
//     }
//     while(x<0);
//     printf("hello radhe");
// }
// #include<stdio.h>
// int main()
// {
//     int y,n=2,sum=0;
//     printf("enter the value of y:");
//     scanf("%d",&y);
//     do
//     {
//        sum=sum+n;
//        n=n+2;
//     } 
//     while(n<=y);
//     printf("sum=%d",sum);
//     if(sum==sum)
//     {
//         printf("\nwon");
//     }
    
// }
// #include<stdio.h>
// int main()
// {
//     int n=1,sum=0;
//     do                    // odd case
//     {
//         sum=sum+n;
//         n=n+2;
//     }
//     while(n<=100);
//     printf("sum=%d",sum);
// }
// #include<stdio.h>
// int main()
// {
//     int n=0,sum=0;
//     do
//     {                     //even case
//         sum=sum+n;
//         n=n+2;
//     }
//     while(n<=100);
//     printf("sum=%d",sum);
// } 
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double i=1,n,x,sum=0;
//     printf("enter the value of n:");
//     scanf("%lf",&n);                        using double data type 
//     printf("enter the value of x:");
//     scanf("%lf",&x);
//     do
//     {
//         sum=sum + pow(x,i)/i;
//         i++;
//     }
//     while(i<=n);
//     printf("sum=%lf",sum);
// }
// #include<stdio.h>
// #include<math.h>                              using int data type
// int main()
// {
//     int i=1,n,x,sum=0;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     printf("enter the value of x:");
//     scanf("%d",&x);
//     do
//     {
//         sum=sum + pow(x,i)/i;
//         i++;
//     }
//     while(i<=n);
//     printf("sum=%d",sum);
// }
// #include<stdio.h>
// int main()
// {
//     int n,r,sum=0;
//     do
//     {
//         r=n%10;
//         sum=sum+r;
//         n=n/100;
        
//     } while (n>0);
//     printf("sum of three digit number=%d",sum);
    
// }
// #include<stdio.h>
// int main()
// {int i;
//     for(i=0;i=0;i++)
//     {
//         printf("gate academy\n");
//     }

// }
// #include<stdio.h>
// int main()
// {int i;
//     for(i=1;printf("radhe");printf("radhe"))
//     {
//         printf("gate academy\n");
//     }

// }
// #include<stdio.h>
// int main()
// {
//     int i;
//     for (i=0;i<=10;i++)
//     {
//         printf("hello\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=5;printf("\n%d",i))
//     {
//         i++;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i=i*2)
//     {
//         printf("gas\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=20;i++)
//     {
//         if(i%2==0)
//         {
//             printf("i=%d\n",i);
//         }
      

//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i,sum=0;
//     for(i=1;i<=50;i++)
//     {
//         sum=sum+i;
//     }
//     printf("sum=%d",sum);
// }
// #include<stdio.h>
// int main()
// {
//     int n,i,fact=1;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=n;i>=1;i--)
//     {
//         fact=fact*i;
//     }
//     printf("fact=%d",fact);

// }
// #include<stdio.h>
// int main()
// {
//     int n,i,fact=1;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     printf("factorial=%d",fact);
// }
// #include<stdio.h>
// int main()
// {
//     int n,i,sum=0;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             sum++;
//         }
//     }
//     if(sum==2)
//     {
//         printf("number is prime");
//     }
//     else{
//         printf("number is not prime");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n,r,sum=0;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         r=n%10;
//         sum=sum+r;
//         n=n/10;
//     }
//     printf("%d",sum);
// }
// #include<stdio.h>
// int main()
// {
//     int n,r,sum=0;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(;n!=0;n=n/10)
//     {
//         r=n%10;
//         sum=sum+r;
//     }
//     printf("sum=%d",sum);
// }
// #include<stdio.h>
// int main()
// {
//     int n,r,sum=0;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(;n>0&&n!=0;n=n/10)
//     {
//         r=n%10;
//         sum=sum*10+r;
//     }
//     printf("reverse number=%d",sum);
// }
// #include<stdio.h>
// int main()
// {
//     int n,r,sum=0,temp;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(temp=n;n!=0;n=n/10)
//     {
//         r=n%10;
//         sum=sum+(r*r*r);
//     }
//     if(temp==sum)
//     {
//         printf("no. is armstrong");
//     }
//     else{
//         printf("no. is not armstrong");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n,r,sum=0,temp;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(temp=n;n>0;n=n/10)
//     {
//         r=n%10;
//         sum=sum*10+r;
//     }
//     if(temp==sum)
//     {
//         printf("no is palindrome");
//     }
//     else
//     {
//         printf("no is not palindrome");
//     }

// }
// WAP to print strong number
// #include<stdio.h>
// int main()
// {                                            wrong
//     int n,i=1,r,sum=0,fact=1,temp;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     temp=n;
//     while(n)
//     {
//         r=n%10;
//         while(i<=r)
//         {
//             fact=fact*i;
//             i++;
//         }
//         printf("fact=%d\t",fact);
//         sum=sum+fact;
//         n=n/10;
//         printf("sum=%d\n",sum);
//     }
//      if(temp==sum)
//      {
//             printf("strong number");
//     }
//      else{
//             printf("number is not strong");
//         }

//     }
// #include<stdio.h>
// int main()
// {
//     int a=0,b=1,n,i=0,sum=0;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=(n-2);i++)
//     {
//         sum=a+b;
//         a=b;
//         b=sum;
        
//     }
//     printf("fibonacci series=%d",sum);
    
// }
// #include<stdio.h>
// int main()
// {
//     int a=0,b=1,n,i=0,sum=0;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=0;i<=(n-2);i++)
//     {
//         sum=a+b;
//         a=b;
//         b=sum;
        
// //     }
// //     printf("fibonacci series=%d",sum);
    
// // }
// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=n;i>=1;i--)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     } 
// }
// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=n;j>=i;j--)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     } 
// }
// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j%2);
//         }
//         printf("\n");
//     } 
// }
// #include<stdio.h>
// int main()
// {
//     int n, i,j;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=n;i>=1;i--)
//     {
//         for(j=n;j>=i;j--)
//         {
//             printf("%d",j);
//         }
//     printf("\n");
//     }
// }
   
// }
// #include<stdio.h>
// int main()
// {
//     int n, i,j,k=1;               floyds triangle
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d ",k++);
//         }
//     printf("\n");
//     }
   
// }
// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=5;i>=1;i--)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d ",j%2);
//         }
//     printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=i;j>=1;j--)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n,i,j,s;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(s=n;s>=i;s--)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             printf(" %d  ",j);
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>

// int main() {
//     int n = 6; // Number of rows in Pascal's Triangle
//     int val;

//     for (int i = 0; i < n; i++) {
//         val = 1; // First element in a row is always 1

//         // Print spaces for formatting
//         for (int j = 0; j < n - i - 1; j++)
//             printf(" ");

//         // Print Pascal's Triangle values
//         for (int j = 0; j <= i; j++) {
//             printf("%d ", val);
//             val = val * (i - j) / (j + 1); // Compute next value
//         }
//         printf("\n"); // Move to the next line
//     }

// }
// #include<stdio.h>
// int main()
// {
//     int n,i,j,val=1,k;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         val=1;
//         for(k=0;k<n-i-1;k++)
//         {
//             printf(" ");
//         }
//         for(j=0;j<=i;j++)
//         {
           
//             printf("%d ",val);
//             val=val*(i-j)/(j+1);
//         }
//         printf("\n");
//     }

// }
// #include<stdio.h>
// int main()
// {
//     int a[26],i;
//     for(i=0;i<=25;i++)
//     {
//         a[i]='A'+i;
//         printf("%d %c\n",a[i],a[i]);
//     }
    
// }
// #include<stdio.h>
// int main()
// {
//     int a[5];
//     a[0]=5;
//     a[2]=3;
//     a[3/2]=4;
//     a[3]=a[0];
//     printf("%d %d %d %d",a[0],a[1],a[2],a[3]);
// }
// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("enter the size of element:");
//     scanf("%d",&size);
//    int a[size],i;
//    for(i=0;i<5;i++)
//    {
//     scanf("%d",&a[i]);
//    }
//    for(i=0;i<5;i++)
//    {
//     printf(" %d",a[i]);
//    }
// }
// #include<stdio.h>
// int main()
// {
//     int size,p,v;
//     printf("enter the size:");
//     scanf("%d",&size);
//     int a[size],i;
//     printf("insert the values:");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("enter the value of p:");
//     scanf("%d",&p);
//     printf("enter the value of v:");
//     scanf("%d",&v);
//     for(i=size-1;i>=(p-1);i--)
//     {
//         a[i+1]=a[i];
//     }
//     a[p-1]=v;
//     for(i=0;i<=size;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n,p;
//     printf("enter the size:");
//     scanf("%d",&n);
//     int a[n],i;
//     printf("insert the element:");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("enter the position");
//     scanf("%d",&p);
//     if(p>=n-1)
//     {
//         printf("not deletion");
//     }
//     else
//     {
//         for(i=p-1;i<n-1;i++)
//         {
//             a[i]=a[i+1];
//         }
//     }
//     for(i=0;i<n-1;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[5],i;
//     printf("insert the elements:");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//         // sum=sum+a[i];
//     //     if(a[i]%2==0)
//     //     {
//     //         printf("even=%d",a[i]);
//     //     }
//     //     else
//     //     {
//     //         printf("odd=%d",a[i]);
//     //     }
//     // }
//     // printf("%d",even);
//     // printf("\n%d",odd);
//     // for(i=5-1;i>=0;i--)
//     // {
//     //     printf("%d",a[i]);
//     // }
    
    


// }
// #include<stdio.h>
// int main()
// {
//     int a[5],i;
//     printf("insert the elements:");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
        // sum=sum+a[i];
    //     if(a[i]%2==0)
    //     {
    //         printf("even=%d",a[i]);
    //     }
    //     else
    //     {
    //         printf("odd=%d",a[i]);
    //     }
    // }
    // printf("%d",even);
    // printf("\n%d",odd);
    // for(i=5-1;i>=0;i--)
    // {
    //     printf("%d",a[i]);
    // }
// }
// #include<stdio.h>
// int main()
// {
//     int a[6],b[3],c[3],i,j=0,k=0;
//     printf("enter the elements:");
//     for(i=0;i<6;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<6;i++)
//     {
//         if(a[i]%2==0)
//         {
//             b[j]=a[i];
//             j++;
//         }
//         else
//         {
//             c[k]=a[i];
//             k++;
//         }
//     }
//     for(i=0;i<3;i++)
//     {
//         printf("even=%d\t\n",b[i]);
//     }
//     for(i=0;i<3;i++)
//     {
//         printf("odd=%d\t",c[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[5],n,i;
//     printf("insert the element:");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("enter the value u want search:");
//     scanf("%d",&n);
//     for(i=0;i<5;i++)
//     {
//         if(a[i]==n)
//         {
//            printf("record found\n");
//         }
//         else
//         {
//             printf("record not found");
//         }
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[5],n,i,j,temp;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     printf("insert the elements:");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<i-1;j++)
//         {
//             if(a[j]<a[j+1])
//             {
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//         printf("values are");
//         for(i=0;i<n;i++)
//         {
//             printf("%d\t",a[i]);
//         }
//     }

// }
// #include <stdio.h>
// int main() {
// int arr[5], temp;
// printf("Enter 5 integers: "); 
// for (int i = 0; i < 5; i++) { 
// scanf("%d", &arr[i]);
// }
// // Bubble sort
// for (int i = 0; i < 5 - 1; i++) {
// for (int j = 0; j < 5 - i - 1; j++) { 
// if (arr[j] < arr[j + 1]) {
// temp = arr[j]; 
// arr[j] = arr[j + 1]; 
// arr[j + 1] = temp;
// }
// }
// }
// printf("Sorted Array: "); 
// for (int i = 0; i < 5; i++) {
// printf("%d ", arr[i]);
// }
// }
// #include<stdio.h>
// int main()
// {
//     char c=3;
//     switch(c)
//     {
//         case 3:
//         printf("hello");
//         case 3:
//         printf("nahi");
//         default:
//         printf("hj");

//     }
// }
// #include<stdio.h>
// int main()
// {
// 	int num,r,sum=0,temp,fact;
// 	printf("enter the value of num:");
// 	scanf("%d",&num);
// 	temp=num;
// 	while(num!=0)
// 	{
// 		fact=1;
// 		r=num%10;
// 		while(r>=1)
// 		{
// 			fact=fact*r;
// 			r--;
// 		}
// 		sum=sum+fact;
// 		num=num/10;
//     }
// 		if(sum==temp)
// 		{
// 			printf("strong number");
// 		}
// 		else
// 		{
// 			printf("not strong number");
// 		}
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     int arr[n],i,x,y;
//     printf("insert the elements:");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the value of x:");
//     scanf("%d",&x);
//     printf("enter the value of y:");
//     scanf("%d",&y);
//     for(i=n-1;i>=x-1;i--)
//     {
//         arr[i+1]=arr[i];
//     }
//     arr[x-1]=y;
//     for(i=0;i<=n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i,sum=0, arr[5]={1,9,56,45,36};
//     for(i=4;i>=0;i--)
//     {
//         // printf("%d\n",arr[i]);
//         sum+=arr[i];
//     }
//     printf("%d",sum);
// }
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=500;i++)
//     {
//         printf("%d=SORRY!!\n",i);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[5],p,i;
//     printf("insert the elements:");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("enter the value of p:");
//     scanf("%d",&p);
//     if(p>=5-1)
//     {
//         printf("delation is not possible");
//     }
//     else
//     {
//         for(int i=p-1;i<5-1;i++)
//         {
//             a[i]=a[i+1];
//         }
//     }
//     for(int i=0;i<5-1;i++)
//     {
//         printf("%d\t",a[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int arr[5];
//     printf("insert the elements:");
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=5-1;i>=0;i--)
//     {
//         printf("%d\t",arr[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int arr[6],i;
//     for(i=0;i<6;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<6;i++)
//     {
//         if(arr[i]%2==0)
//         {
//             printf("even=%d\n",arr[i]);
//         }
//         else
//         {
//             printf("odd=%d\n",arr[i]);
//         }
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n],i,found,sum=0;
//     printf("insert the elements:");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the value of found:");
//     scanf("%d",&found);
//     for(i=0;i<n;i++)
//     {
//         if(arr[i]==found)
//         {
//            printf("\nfound!!");
//         }
//         else{
//             printf("\nNot found!!");
//         }  
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the elements:");
//     scanf("%d",&n);
//     int arr[20],i,j=0,temp;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//               temp=arr[j];
//               arr[j]=arr[i];
//               arr[i]=temp;
//             }
//         }
//     }
// for(i=0;i<n;i++)
// {
//     printf("%d\t",arr[i]);
// }
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the elements:");
//     scanf("%d",&n);
//     int arr[20],i,j=0,temp;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//               temp=arr[j];
//               arr[j]=arr[i];
//               arr[i]=temp;
//             }
//         }
//     }
// for(i=0;i<n;i++)
// {
//     printf("%d\t",arr[i]);
// }
// }
// #include <stdio.h>
// int main()
// {
//     int m,n;
//     printf("enter the size of m:");
//     scanf("%d",&m);
//     printf("enter the size of n:");
//     scanf("%d",&n);
//     int arr[m][n],i,j,summ=0;
//     printf("insert the elements:");
//     for(i=0;i<m;i++)
//     {
//       for(j=0;j<n;j++)
//       {
//           scanf("%d",&arr[i][j]);
//       }
//     }
//     printf("values are......\n");
//     for(i=0;i<m;i++)
//     {
//         int summ=0;
//         for(j=0;j<n;j++)
//         {
//             printf("%d\t",arr[i][j]);
//             summ=summ+arr[i][j];
        
//         }
//         printf("\n");
//         printf("\nsumm=%d\t",summ);
    
//     }
// }
// #include <stdio.h>

// int main()
// {
//     int m,n;
//     printf("enter the size of m:");
//     scanf("%d",&m);
//     printf("enter the size of n:");
//     scanf("%d",&n);
//     int arr[m][n],i,j;
//     printf("insert the elements:");
//     for(i=0;i<m;i++)
//     {
//       for(j=n-1;j>=0;j--)
//       {
//           scanf("%d",&arr[i][j]);
//       }
//     }
//     printf("values are......\n");
//     for(i=m-1;i>=0;i--)
//     {
//         for(j=0;j<m;j++)
//         {
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>             functions
// void leftstep()
// {
//     printf("hello left\n");
//     printf("go left\n");
//     printf("bye left");
// }
// void c()
// {
//     printf("hello right\n");
//     printf("go right\n");
//     printf("bye right");
// }
// int main()
// {
//     leftstep();
// }
// #include<stdio.h>
// void add()
// {
//     int a,b;
//     printf("enter the value of a and b:");
//     scanf("%d %d",&a,&b);
//     int c=a+b;
//     printf("sum=%d",c);
// }
// int main()
// {
//     add();  
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the size of n:");
//     scanf("%d",&n);
//     int arr[n],i,j,temp;
//     printf("insert the elemnts:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n-1;j++)
//         {
//             if(arr[j]<arr[j+1])
//             {
//                 temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     printf("values are.....");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int m,n;
//     printf("enter the size:");
//     scanf("%d",&m);
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     int arr[m][n],i,j,temp;
//     printf("insert the elements:");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=m-1;i>=0;i--)
//     {
//         for(j=n-1;j>=0;j--)
//         {
//             printf("%d ",arr[i][j]);
//         }
//    printf("\n");
//     } 
// }
// #include<stdio.h>               sum of rows
// int main()
// {
//     int m,n,sum=0;
//     printf("enter the size:");
//     scanf("%d",&m);
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     int arr[m][n],i,j,temp;
//     printf("insert the elements:");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         int sum=0;
//         for(j=0;j<n;j++)
//         {
//             // printf("%d ",arr[i][j]);
//             sum=sum+arr[i][j];
//         }
//         printf("sum=%d\n",sum);
   
//     } 
// }
// #include<stdio.h>              
// int main()
// {
//     int m,n,transpose[n][m];
//     printf("enter the size:");
//     scanf("%d",&m);
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     int arr[m][n],i,j,temp;
//     printf("insert the elements:");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&arr[j][i]);
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         // int sum=0;
//         for(j=0;j<n;j++)
//         {
//             transpose[i][j] = arr[j][i];
//             // printf("%d ",transpose[i][j]);
//         }
//         // printf("\n");
//     } 
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d ",transpose[i][j]);
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n,temp,j=0,i;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("insert the elements:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=1;i<n;i++)
//     {
//         temp=arr[i];
//         j=i-1;
//         while(j>=0 && arr[j]>temp)  
//         {
//             arr[j+1]=arr[j];
//             j=j-1;
//         }
//         arr[j+1]=temp;
//     }
//     printf("*********values are***********");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n,i,j,temp;
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=1;i<n;i++)
//     {
//         temp=arr[i];
//         j=i-1;
//         while(j>=0 && arr[j]<temp)
//         {
//             arr[j+1]=arr[j];
//             j=j-1;
//         }
//         arr[j+1]=temp;
//     }
//     printf("**********values are..................");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the size of n:");
//     scanf("%d",&n);
//     int arr[n],i,j,temp;
//     printf("inserts the elements:\n");
//     for (i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//         if(arr[i]<arr[j])
//         {
//             temp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=temp;
//         }
//         }
//     }
//     printf("values are.............\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int m,n,sum;
//     printf("enter the value of m and n:");
//     scanf("%d %d",&m,&n);
//     int arr[m][n],i,j;
//     printf("insert the elements:");
//     for (i=0;i<m;i++)
//     {
//         // int sum=0;
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("matrix>>>>>><<<<<<\n");
//     // printf("[");
//     for(i=0;i<m;i++)
//     { 
//         printf("[ ");
//         int sum=0;
//         for(j=0;j<n;j++)
//         {
//             printf("%d ",arr[i][j]);
//             sum+=arr[i][j];
//         }
//         printf("]");
//         printf("\n");
//         printf("%d",sum);
//     }
// }
// #include<stdio.h>            addition of two matrices
// int main()
// {
//     int m,n,i,j;
//     printf("enter the size of m and n:");
//     scanf("%d %d",&m,&n);
//     int a[m][n],b[m][n],c[m][n];
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     printf("addition of matrix\n");
//     for(i=0;i<m;i++)
//     {   printf(" [");
//         for(j=0;j<n;j++)
//         {
//             printf("%d ",c[i][j]);
//         }
//         printf("]");
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int m,n,i,j;
//     printf("enter the size of m and n:");
//     scanf("%d %d",&m,&n);
//     int a[m][n],b[m][n],c[m][n];
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             c[i][j]=a[i][j]-b[i][j];
//         }
//     }
//     printf("subtraction of matrix\n");
//     for(i=0;i<m;i++)
//     {   printf(" [");
//         for(j=0;j<n;j++)
//         {
//             printf("%d ",c[i][j]);
//         }
//         printf("]");
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int m,n,i,j;
//     printf("enter the size of m and n:");
//     scanf("%d %d",&m,&n);
//     int a[m][n],b[m][n],c[3][3];
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             c[i][j]=a[i][j]*b[i][j];
//         }
//     }
//     printf("product or mulitiplication of matrix\n");
//     for(i=0;i<3;i++)
//     {   printf(" [");
//         for(j=0;j<3;j++)
//         {
//             printf("%d ",c[i][j]);
//         }
//         printf("]");
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int m,n,i,j,sum=0;
//     printf("enter the size of m and n:");
//     scanf("%d %d",&m,&n);
//     int a[m][n],transpose[n][m];
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             transpose[i][j]=a[j][i];
//         }
//     }
//     printf("transpose matrix\n");
//     for(i=0;i<n;i++)
//     {
       
//         for(j=0;j<m;j++)
//         {
//             printf("%d ",transpose[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             if(transpose[i]==transpose[j])
//             {
//                 sum=sum+transpose[i][j];
//             }
//         }
//     }
//     printf("sum=%d",sum);
// }
// #include<stdio.h>            multiplication matrix
// int main()
// {
//     int m,n,i,j,k;
//     printf("enter the value of m and n:");
//     scanf("%d %d",&m,&n);
//     int a[m][n],b[m][n],c[m][n];
//     printf("insert the elements of A matrix:\n");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("insert the elements of matrix B\n");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             c[i][j]=0;
//             for(k=0;k<n;k++)
//             {
//                 c[i][j]=c[i][j]+(a[i][k]*b[k][i]);
//             }   
//         }
//     }
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }

// #include<stdio.h>
// int main()
// {
//     char str1[]={'g','a','t','e','5'};
//     char str2[]="gate";
//     printf("%s",str1);
//     printf("%s",str2);
// }
// #include<stdio.h>
// int main()
// {
//     printf("%d,%d,%d",sizeof(3),sizeof(3),sizeof(3));
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[20]="atul";
//     printf("length=%d\n",strlen(a));
//     printf("%s",a);
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[3][20];
//     printf("enter your string\n");
//     for(int i=0;i<3;i++)
//     {
//         gets(a[i]);
//     }
//     printf("strings are.....\n");
//     for(int i=0;i<3;i++)
//     {
//       puts(a[i]);
//     }

// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[1];
//     printf("enter your name:");
//     gets(a);
//     puts(a);
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[12];
//     int n;
//     printf("enter your name:");
//     gets(a);
//     n=strlen(a);
//     // puts(a);
//     printf("%s",a);
//     printf("%d",n);
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[5][24];
//     int i,n;
//     printf("enter your name");
//     for(i=0;i<5;i++)
//     {
//         gets(a[i]);
//     }
//     for(i=0;i<5;i++)
//     {
//         n=strlen(a[i]);
//         puts(a[i]); printf("%d\n",n);
//     }
// }
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[87]="dipanshu";
//     char b[87]="gupta";
//     strcat(b,a);
//     printf("%s",b);
// }
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[87]="riya";
//     char b[57]="kajal";
//     strcpy(b,a);
//     printf("%s\n%s",a,b);
// }
// #include<stdio.h>             for only case sensitive
// #include<string.h>
// void main()
// {
//     char a[50]="dipanshuji";
//     char b[50]="dipanshuji";
//     if(strcmp(a,b)==0)
//     {
//         printf("strings are equal");
//     }
//     else if(strcmp(a,b)>0)
//     {
//         printf("a is greater than b");
//     }
//     else{
//         printf("b is greater than a");
//     }
// }
// #include<stdio.h>             ignore case sensitive 
// #include<string.h>
// void main()
// {
//     char a[50]="dipanshuji";
//     char b[50]="dipanshuji";
//     if(strcmp(a,b)==0)
//     {
//         printf("strings are equal");
//     }
//     else if(strcmp(a,b)>0)
//     {
//         printf("a is greater than b");
//     }
//     else{
//         printf("b is greater than a");
//     }
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[56]="DiPanSHu";
//     printf("%s",strupr(a));
//        printf("\n%s",strlwr(a));
// }
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[500];
//     printf("enter the string:");
//     gets(a);
//     int i,j=1;
//     while(a[i]!='\0')
//     {
//         if(a[i]==' '&&a[i+1]!=' ')
//         {
//             j++;
//         }
//         i++;
//     }
//     printf("total no. of words=%d",j);
// }
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[500];
//     printf("enter the value of strings:");
//     gets(a);
//     int count=0;
//     for(int i=0;i<strlen(a);i++)
//     {
//         if(a[i]==' ')
//         {
//             count++;
//         }
//     }
//     printf("%d",count);
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[50];
//     printf("enter your string:");
//     gets(a);
//     int i,v=0,s=0,c=0;
//     for(i=0;i<strlen(a);i++)
//     {
//         if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
//         {
//             v=v+1;
//         }
//         else if(a[i]==' ')
//         {
//             s=s+1;
//         }
//         else{
//             c =c+1;
//         }
//     }
//     printf("vowels=%d\n",v);
//     printf("spaces=%d\n",s);
//     printf("consonents=%d",c);
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[45];
//     printf("enter your string");
//     gets(a);
//     int i;
//     for(i=0;i<strlen(a);i++)
//     {
//         printf("%c\n",a[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[3][3],sum=0;
//     printf("insert the elements:");
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             if(i==j)
//             {
//             sum+=a[i][j];
//             }
//         }
//     }
//     for (int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             if(i==j)
//             {
//                 printf("%d\t",sum);
//             }
//             else{
//                 printf("-\t");
//             }
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     char a[56];
//     int i;
//     printf("enter your string:");
//     gets(a);
//     while(a[i]!='\0')
//     {
//         printf("%c\n",a[i]);
//         i++;
//     }
// }
// #include<stdio.h>                 swap two string....
// #include<string.h>
// int main()
// {
//     char a[24],b[45],temp[25];
//     printf("enter your string A:");
//     gets(a);
//     printf("enter your string B:");
//     gets(b);
//     strcpy(temp,a);
//     strcpy(a,b);
//     strcpy(b,temp);
//     printf("a=%s\nb=%s",a,b);
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[50],b[50];
//     int i;
//     printf("enter your string:");
//     gets(a);
//     strcpy(b,a);
//     strrev(a);
//     if(b[i]==a[i])
//     {
//         printf("palindrome string...");
//     }
//     else
//     {
//         puts("nope...");
//     } 
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[45];
//     int i,j;
//     printf("enter your sting:");
//     gets(a);
//     j=strlen(a);
//     for(i=0;i<j/2;i++)
//     {
//         if(a[i]!=a[j-1-i])
//         {
//             printf("not palindrome...");
//             break;
//         }
//     }
//     if(i==j/2)
//     {
//         puts("palindrome string..");
//     }
// }
// #include<stdio.h>
// #include<string.h>            code for multiple strings.............
// int main()
// {
//     char c[5][50];
//     int i;
//     for(i=0;i<5;i++)
//     {
//         gets(c[i]);
//     }
//     for(i=0;i<5;i++)
//     {
//         puts(c[i]);
//     }
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[50];
//     printf("enter your string:");
//     gets(a);
//     for(int i=0;i<strlen(a);i++)
//     {
//         printf("character=%c\taddress=%p\n",a[i],&a[i]);
//     }
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[5];
//     printf("enter the string:");
//     gets(a);
//     char* b;
//     for(int i=0;i<5;i++)
//     {
//         printf("character%c\t",a[i]);
//         printf("address=%p\n", b);
//     }

// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[56];
//     printf("enter your name:");
//     gets(a);
//     printf("%s\n%s",a,"gupta");
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[46];
//     printf("enter your string:");
//     gets(a);
//     printf("output....\n");
//     puts(a);

// }
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// void main()
// {
//     char a[40],b[30];
//     printf("enter string A:");
//     scanf("%s",&a);
//     printf("enter string B:");
//     scanf("%s",&b);
//     int i,j,l1,l2,temp,flag=2;
//     l1=strlen(a);
//     l2=strlen(b);
//     if(l1==l2){
//     for(i=0;i<l1;i++)
//     {
//         for(j=0;j<l1;j++)
//         {
//             if(a[i]>a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<l2;i++)
//     {
//         for(j=0;j<l2;j++)
//         {
//             if(b[i]>b[j])
//             {
//                 temp=b[i];
//                 b[i]=b[j];
//                 b[j]=temp;
//             }
//         }
//     }
//     }
//     if(strcmp(a,b)==0)
//     {
//         flag=2;
//     }
//     else
//     {
//         flag=1;
//     }
//     if(flag==2){
//     printf("anagram..");
//     }
//     else{
//         printf("Nope.");
//     }
// }
// #include<stdio.h>                   important function concept code
// int check(int);
// int main()
// {
//     int i=45,c;
//     c=check(i);
//     printf("%d",c);
//     return 0;
// }
// int check( int ch)
// {
//     if(ch>=45)
//     return 500+45+5;
//     else
//     return(10*120);
// }
// #include <stdio.h>
// // Function declaration
// int add(int a, int b);

// int main() {
//     int num1, num2, result;

//     // Get input from user
//     printf("Enter first number: ");
//     scanf("%d", &num1);

//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     // Call the function and store the result
//     result = add(num1, num2);

//     // Print the result
//     printf("The sum is: %d\n", result);

//     return 0;
// }

// // Function definition
// int add(int a, int b) {
//     return a + b;
// }
// #include<stdio.h>
// void add(void);
// void main()
// {
//     add();
// }
// void add()
// {
//     int a,b,c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("%d",a+b);
// }
// call by value or Take something or return nothing
// #include<stdio.h>
// int add(int, int);
// int main()
// {
//     int x,y;
//     printf("enter the value of x:");
//     scanf("%d",&x);
//     printf("enter the value of y:");
//     scanf("%d",&y);
//     add(x,y);
// }
// int add(int a,int b)
// {
//     int a=45;
//     int b=5;
//     return a+b;
// }
// user defined functions
// typedef,struct,union,enum.........
// #include<stdio.h>
// typedef int(bhai);
// int main()
// {
//     bhai atul=45;
//     printf("%d",atul);
// }
// Functions pratice questions
// #include<stdio.h>
// void swap(int, int);
// void main(int a,int b){
//     printf("enter the value of a:");
//     scanf("%d",&a);
//     printf("enter the value of b:");
//     scanf("%d",&b);
//     swap(a,b);
// }
// void swap(int x,int y)
// {
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     printf("a=%d\n",x);
//     printf("b=%d",y);
// }
// #include<stdio.h>
// int square(void);
// void main()
// {
//     int a;
//     a=square();
//     printf("%d",a);
    
// }
// int square()
// {
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     return n*n;
// }
// #include<stdio.h>
// int even(int);
// void main(int a)
// {
//     even(a);
// }
// int even(int n)
// {
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     if(n%2==0)
//     {
//         printf("No. is Even");
//     }
//     else
//     {
//         printf("No. is Odd");
//     }
//     return 0;
// }
// Or
// #include<stdio.h>
// void even(int);
// void main(int a)
// {
//     even(a);
// } 
// void even(int n)
// {
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     if(n%2==0)
//     {
//         printf("No. is Even");
//     }
//     else
//     {
//         printf("No. is Odd");
//     }
// }
// #include<stdio.h>
// int bin(int);
// void main(int dec)
// {
//     int s;
//     printf("enter the decimal number:");
//     scanf("%d",&dec);
//     s=bin(dec);
//     printf("%d",s);
// }
// int bin(int dec)
// {
//     int bin=0,r,f=1;
//     while(dec!=0)
//     {
//         r=dec%2;
//         bin=bin+r*f;
//         f=f*10;
//         dec=dec/2;
//     }
//     return bin;
// }
// #include<stdio.h>
// int bin(int);
// int main()  
// {
//     int dec, s;
//     printf("Enter the decimal number: ");
//     scanf("%d", &dec);
//     s = bin(dec);
//     printf("Binary equivalent: %d\n", s);
//     return 0;
// }
// int bin(int dec)
// {
//     int bin = 0, r, f = 1;
//     while(dec != 0)
//     {
//         r = dec % 2;
//         bin = bin + r * f; 
//         f = f * 10;
//         dec = dec / 2;
//     }
//     return bin;
// }
// #include<stdio.h>
// int largeelement(int []);
// int n;
// int main()
// {
//     int a[45],i,s;
//     printf("enter the size:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     s=largeelement(a);
//     printf("max_element=%d",s);
//     return 0;
// }
// int largeelement(int a[])
// {
//     int i=1,maxele=a[0];
//     while(i<n)
//     {
//         if(maxele<a[i])
//         {
//             maxele=a[i];
//         }
//         i++;
//     }
//     return maxele; 
// }
// #include<stdio.h>
// int smaller(int []);
// int n;
// int main()
// {
//     int a[20],i,s;
//     printf("enter the size:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     s=smaller(a);
//     printf("min_value=%d",s);
// }
// int smaller(int a[])
// {
//     int minvalue,i=1;
//     minvalue=a[0];
//     while(i<n)
//     {
//         if(minvalue>a[i])
//         {
//             minvalue=a[i];
//         }
//         i++;
//     }
//     return minvalue;
// }
// #include<stdio.h>
// void arm(int);
// int main(int num)
// {
//     arm(num);
// }
// void arm(int num)
// {
//     int temp,r,sum=0;
//     printf("enter the num:");
//     scanf("%d",&num);
//     temp=num;
//     while(num!=0)
//     {
//         r=num%10;
//         sum=sum+r*r*r;
//         num=num/10;
//     }
//     if(temp==sum)
//     {
//         printf("No is Armstrong.");
//     }
//     else
//     {
//         printf("No is Not armstrong");
//     }
// }
// #include<stdio.h>
// void arm(int);
// int main()
// {
//     int num;
//     printf("enter the value of num;");
//     scanf("%d",&num);
//     arm(num);
//     return 0;
// }
// void arm(int num)
// {
//     int r,sum=0,temp;
//     for(temp=num; num!=0; num=num/10)
//     {
//         r=num%10;
//         sum=sum+r*r*r;
//     }
//     if(temp==sum)
//     {
//         printf("its armstrong.");
//     }
//     else
//     {
//         printf("no. is not armstrong.");
//     }
// }
// #include<stdio.h>
// void prime(int);
// int main()
// {
//     int num;
//     prime(num);
// }
// void prime(int num)
// {
//     int isprime=2,count=0;
//     printf("enter the num:");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++)
//     {
//         if(num%i==0)
//         {
//             count++;
//         }
//     }
//     if(isprime==count)
//     {
//         printf("Prime No.");
//     }
//     else{
//         printf("Not Prime No.");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int num,isprime=1;
//     printf("enter the num:");
//     scanf("%d",&num);
//     if(num<=1)
//     {
//         isprime=0;
//     }
//     else{
//         for(int i=2;i<num;i++)
//         {
//             if(num%i==0)
//             {
//                 isprime=0;
//                 break;
//             }
//         }
//     }
//     if(isprime)
//     {
//         printf("Prime No.");
//     }
//     else{
//         printf("Not Prime No.");
//     }
// }
// Recursion:- when we define an operation in terms of itself.
// or
// A function calling itself is known as recursion.
// types of recursion
// 1.base case or simple case or easy case or no recursion case (comes in if condition or usin func.)
// 2. recursive case or hard case or complex case or recursion case (comes in else condition or using with fun.)
// wap to print your name n times?
// #include <stdio.h>
// void main()
// {
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     int fun(int);
//     fun(n);
// }
// int fun(int n)
// {
//     if(n==1)
//     {
//         printf("dipanshu");
//     }
//     else
//     {
//         printf("dipanshu\n");
//         fun(n-1);
//     }
//     return 0;
// }
// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     sum(n);
//     printf("sum=%d",sum(n));
// }
// int sum(int n)
// {
//     if(n<10)
//     {
//         return n;
//     }
//     else{
//         return (n % 10 + sum(n/10));
//     }
// }
// #include<stdio.h>            // wap to print power of that value
// int power(int,int);
// void main()
// {
//     int base,exp;
//     printf("enter the value of base and exp:");
//     scanf("%d %d",&base,&exp);
//     power(base,exp);
//     printf("%d",power(base,exp));
// }
// int power(int base,int exp)
// {
//     if(exp==1)
//     {
//         return base;
//     }
//     else
//     {
//         return (base * power(base , exp-1));  // return base* (power(base,exp-1));
//     }
// }
// #include<stdio.h>   // wap to print sum of n natural number
// int foo(int );
// int main(int n)
// {
//     printf("enter the number:");
//     scanf("%d",&n);
//     foo(n);
//     printf("%d",foo(n));
// }
// int foo(int n)
// {
//     if(n==1)
//     {
//         return n;
//     }
//     else{
//         return n+foo(n-1);
//     }
// }
// #include<stdio.h>   // wap to print factorial number
// int fact(int );
// int main(int n)
// {
//     printf("enter the number:");
//     scanf("%d",&n);
//     fact(n);
//     printf("factorial of that number: %d",fact(n));
// }
// int fact(int n)
// {
//     if(n==1)
//     {
//         return n;
//     }
//     else{
//         return n*fact(n-1);
//     }
// }


























