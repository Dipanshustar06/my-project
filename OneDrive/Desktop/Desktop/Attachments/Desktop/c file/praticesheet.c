/* pratice sheet of c programming*/
// problem 1:
// #include<stdio.h>
// int main()
// {
//     float celsius,fahrenheit;
//     printf("enter a celsius in degree");
//     scanf("%f",&celsius);
//     fahrenheit=((9*celsius)/5)+32;
//     printf("%.1f",fahrenheit);
//     return 0;
// }

// PROBLEM 2:
// #include<stdio.h>
// int main()
// {
//     float area,radius,volume,length;
//     printf("enter the radius ");
//     scanf("%f",&radius);
//     printf("enter the length");
//     scanf("%f",&length);
//     area=(radius*radius*22)/7;
//     volume=area*length;
//     printf("the area is %f",area);
//     printf("the volume is %f",volume);
//     return 0;
// }

// // PROBLEM 3:
// #include<stdio.h>
// int main()
// {
//     float pound,pound1;
//     printf("enter a value in pound ");
//     scanf("%f",&pound);
//     pound1=0.0454*pound;
//     printf("%f",pound);
//     printf("pounds is %f kilograms",pound1);
//     return 0;
// }
// PROBLEM 4:
// #include<stdio.h>
// int main(){
//     float Q,M,a,b;
//     printf("enter the amount of water in kilograms:");
//     scanf("%f",&M);
//     printf("enter the initial temperature:");
//     scanf("%f",&a);
//     printf("enter the final_temperature");
//     scanf("%f",&b);
//     Q=M*(b-a)*4184;
//     printf("the energy needed is %f",Q);
//     return 0;
// }
// PROBLEM 5:
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float v,a;
//     printf("enter speed:");
//     scanf("%f",&v);
//     printf("enter acceleration:");
//     scanf("%f",&a);
//     printf("The minimum runway length for this aeroplane  is %f",(pow(v,2)/(2*a)));
// }
// PROBLEM 7:
// #include<stdio.h>
// int main()
// {
//     float s,area;
//     printf("enter the side:");
// //     scanf("%f",&s);
// //     printf("the area of the hexagon %f",3*sqrt(3)*pow(s,2)/2);
// //     return 0;
// // }
// // PROBLEM 8:
// #include<stdio.h>
// int main(){
//     float pound,inches,bmi;
//     printf("enter weight in poundes:");
//     scanf("%f",&pound);
//     printf("enter the height in inches");
//     scanf("%f",&inches);
//     bmi= 0.45359237*pound/(0.0254*inches*inches);
//     printf("BMI is %f",bmi);
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float x1,x2,x3,y1,y2,y3,s1,s2,s3,s;
//     printf("enter the value of x1:");
//     scanf("%f",&x1);
//     printf("enter the value of x2:");
//     scanf("%f",&x2);
//     printf("enter the value of x3:");
//     scanf("%f",&x3);
//     s1=sqrt((x2-x1)*(x2-1)+(y2-y1)*(y2-y1));
//     s2=sqrt((x2-x1)*(x2-1)+(y2-y1)*(y2-y1))
//     s3=sqrt((x2-x1)*(x2-1)+(y2-y1)*(y2-y1))
#include<stdio.h>
// void main()
// {
//     printf("hello\nc1324\npapa");
// }
// #include<stdio.h>
// #define ASH "chirag beta"
// int main()
// {
//     printf(ASH);
//     printf("hello\araja");
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     char a='C';
//     printf("%d",a);
// }
// #include<stdio.h>
// int main()
// {
//     int a=67;
//     printf("%c",a);
// }
// #include<stdio.h>
// int main()
// {
//     int a='A';
//     printf("%c",a);
// }
// #include<stdio.h>
// #define pi "3.14815511"
// int main()
// {
//     // float pi=67;
//     printf(pi);
// }
// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%i",&a);   i karta hain user se input bhi octal ya other form me accept karta hain
//     printf("%i",a);
// }
// #include<stdio.h>
// int main()
// {
//     int a= 0x12;
//     printf("%d",a);
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
//     // int a=5;
//     switch('a')
//     {
//         case 1:
//         printf("dipanshu");
//         case 5:
//         printf("ashish");
//         default:
//         printf("gh");

//         return 0;
//     }
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[1001];
//     fgets(str,sizeof(str),stdin);
//     int i,j=0;
//     for(i=0;str[i]!='\0';i++)
//     {
//         char ch=str[i];
//         if(ch!='a' && ch!='e' && ch!='i' && ch!='o' &&ch!='u')
//         {
//             str[j]=str[i];
//             printf("%c",str[j]);
//         }
//     }
// }
#include<stdio.h>
// int main() {
//     int n, sum = 0;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++) {
//     sum += i;
//     printf("%d ", sum);
//     }
//     return 0;
//     }
// int main() {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     for(int i = a; i <= b; i++) {
//     printf("%d ", i);
//     }
//     return 0;
//     }
// int main()
// {
//     int a,b,sum=0;
//     scanf("%d %d",&a,&b);
//     for(int i=a;i<=b;i++)
//     {
//         if(i%2==0)
//         {
//             sum+=i;
//         }
//     }
//     printf("sum of even=%d",sum);
// }
// int main()
// {
//     int a,b,sum=0;
//     scanf("%d %d",&a,&b);
//     for(int i=a;i<=b;i++)
//     {
//         sum+=i;
//         printf("sum=%d ",sum);
//     }
    
// }
// int main()
// {
//     int a,b,pro=1;
//     scanf("%d %d",&a,&b);
//     for(int i=a;i<=b;i++)
//     {
//         pro*=i;
//     }
//     printf("product: %d",pro);
// }
// int main()
// {
//     int num,fact=1;
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         fact=fact*num;
//         num--;
//     }
//     printf("factorial of that number:%d",fact);
// }
// int main()
// {
//     int num,fact=1;
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++)
//     {
//         fact*=i;
//     }
//     printf("factorial=%d",fact);
// }
// int main()
// {
//     int num,fact=1;
//     scanf("%d",&num);
//     for(int i=num;i>0;i--)
//     {
//         fact*=i;
//     }
//     printf("factorial=%d",fact);
// }
// int main()
// {
//     int num;
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++)
//     {
//         int fact=1;
//         for(int j=1;j<=i;j++)
//         {
//             fact*=j;
//         }
//         printf("factorial of %d number=%d",i,fact);
//         printf("\n");
//     }
// }
// int main()
// {
//     int num,sum=0;
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++)
//     {
//         int fact=1;
//         for(int j=1;j<=i;j++)
//         {
//             fact*=j;
//         }
//         sum+=fact;
//     }
//     printf("%d",sum);
// }
// int main()
// {
//     int n,sum=0;
//     scanf("%d",&n);
//     for(int i=1;i<n;i++)
//     {
//         if(n % i== 0)
//         {
//             sum+=i;
//         }
//     }
//     if(sum==n)
//     {
//         printf("perfect number");
//     }
//     else
//     printf("non- perfect");
// }
// int main()
// {
//     int num,count=0;
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++)
//     {
//         if(num%i==0)
//         {
//             count++;
//         }
//     }
//     printf("%d",count);
// }
// int main()
// {
//     int num,count =0;
//     int isprime=2;
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++)
//     {
//         if(num % i==0)
//         {
//             count++;
//         }
//     }
//     if(isprime==count)
//     {
//         printf("Prime Number");
//     }
//     else{
//         printf("Not Prime Number");
//     }

// }
// int main()
// {
//     int num;
//     scanf("%d",&num);
//     for(int i=2;i<=num;i++)
//     {
//         int isprime=1;
//         for(int j=2;j*j<=i;j++)
//         {
//             if(i % j== 0)
//             {
//                 isprime=0;
//                 break;
//             }
//         }
//         if(isprime==1)
//         {
//             printf("%d ",i);
//         }
//         else
//         {
//             printf("not prime number if you want its wrong then you check ");
//         }
//     }
// }
// int main()
// {
//     int num,t1=0,t2=1,nextterm;
//     scanf("%d",&num);
//     printf("fibonacci series:");
//     for(int i=1;i<=num;i++)
//     {
//         printf("%d ",t1);
//         nextterm=t1+t2;
//         t1=t2;
//         t2=nextterm;
//     }
// }
// int main()
// {
//     int num,count=0;
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         num=num/10;
//         count++;
//     }
//     printf("%d",count);
// }
// int main()
// {
//     int num,sum=0,r;
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         r=num%10;
//         sum=sum+r;
//         num=num/10;
//     }
//     printf("sum of digit=%d",sum);
// }
// int main()
// {
//     int num,sum=0,r;
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         r=num%10;
//         if(r%2==0)
//  {
//         sum=sum+r;
//  }
//         num=num/10;
//     }
//     printf("sum of digit=%d",sum);
// }
// int main()
// {
//     int num,r,sum=0;
//     scanf("%d",&num);
//     while(num != 0)
//     {
//         r=num%10;
//         sum+=r;
//         num=num/10;
//     }
//     if(num%5==0)
//     {
//         printf("toxic no.");
//     }
//     else
//     {
//         printf("no toxic no.");
//     }
// }
// int main()
// {
//     int num,sum=0,sq;
//     scanf("%d",&num);
//     sq=num*num;
//     while(sq !=0)
//     {
//         sum = sum + sq % 10;
//         sq=sq/10;
//     }
//     if(sum==num)
//     {
//         printf("Neon number");
//     }
//     else
//     printf("not neon number");
// }
// int main()
// {
//     int num,reversenumber=0,r;
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         r=num%10;
//         reversenumber=reversenumber*10+r;
//         num=num/10;
//     }
//     printf("reverse number=%d",reversenumber);
// }
// int main()
// {
//     int num,sum=0,temp,r;
//     scanf("%d",&num);
//     temp=num;
//     while(num !=0)
//     {
//         r=num % 10;
//         sum=sum*10+r;
//         num=num/10;
//     }
//     if(temp==sum)
//     {
//         printf("palindrome number");
//     }
//     else
//     {
//         printf("Not palindrome number");
//     }
// }
// int main()
// {
//     int num,sum=0,temp,r;
//     scanf("%d",&num);
//     temp=num;
//     while(num !=0)
//     {
//         r=num % 10;
//         sum=sum+(r*r*r);
//         num=num/10;
//     }
//     if(temp==sum)
//     {
//         printf("armstrong number");
//     }
//     else
//     {
//         printf("Not armstrong number");
//     }
// }
// int main()
// {
//     int a=10,b;
//     b=++a + a+++a++;
//     printf("b=%d",b);
//     printf("a=%d",a);
// }
// #include<stdio.h>
// int main()
// {
//     int a[3][3],b[3][3],c[3][3];
//     int m1,n1,m2,n2;
//     scanf("%d %d %d %d",&m1,&n1,&m2,&n2);
//     if(n1!= m2)
//     {
//         printf("multiplication is not possible:");
//     }
//     for(int i=0;i<m1;i++)
//     {
//         for(int j=0;j<n1;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<m2;i++)
//     {
//         for(int j=0;j<n2;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(int i=0;i<m1;i++)
//     {
//         for(int j=0;j<n2;j++)
//         {
//             c[i][j]=0;
//             for(int k=0;k<n1;k++)
//             {
//                 c[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//     }
//     for(int i=0;i<m1;i++)
//     {
//         for(int j=0;j<n2;j++)
//         {
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int arr[3][3];
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0,k=n-1;j<k;j++,k--)
//         {
//             int temp=arr[i][j];
//             arr[i][j]=arr[i][k];
//             arr[i][k]=temp;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[4];
//     int i=0;
//     fgets(a,sizeof(a),stdin);
//     a[strcspn(a,"\n")]='\0';
//     while(a[i] != '\0')
//     {
//         printf("%c %d\n",a[i],a[i]);
//         i++;
//     }
// }
// #include <stdio.h>
// #include<string.h>
// #include <ctype.h>

// int main() {
//     char str[100];
//     fgets(str,sizeof(str),stdin);
//     str[strcspn(str,"\n")]='\0';
//     for(int i=0;str[i]!='\0';i++)
//     {
//         str[i]=toupper(str[i]);
//     }
//     printf("%s",str);
// }

    

    





