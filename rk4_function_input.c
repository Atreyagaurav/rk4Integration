#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<windows.h>

main()
{
    char s[20],fun[40];
    int i,sum,j;
    printf("Enter the function<using standard programming syntax>:");
    scanf("%s",fun);
    i=sum=j=0;
    do{
        sum+=fun[i++];
    }while(fun[i]!='\0');
    i=0;
    do{
        j+=fun[i];
        s[i++]=97+floor((j*25)/sum);
    }while(i<10);
    s[10]='.';
    s[11]='p';
    s[12]='y';
    s[13]='\0';
    FILE *fp;
    fp=fopen(s,"w");
    fprintf(fp,"import math\n"
                "from math import*\n"
                "def fun(x,y):\n"
                    "\treturn %s\n"
                "print\(\"Enter x0:\"\)\n"
                "x0=float\(input\(\":\"\)\)\n"
                "print\(\"Enter y0:\"\)\n"
                "y0=float\(input\(\":\"\)\)\n"
                "print\(\"Enter xn:\"\)\n"
                "xn=float\(input\(\":\"\)\)\n"
                "print\(\"Enter h:\"\)\n"
                "h=float\(input\(\":\"\)\)\n"
                "while True:\n"
                    "\tk1=h*fun\(x0,y0\)\n"
                    "\tk2=h*fun\(x0+h/2,y0+k1/2\)\n"
                    "\tk3=h*fun\(x0+h/2,y0+k2/2\)\n"
                    "\tk4=h*fun\(x0+h,y0+k3\)\n"
                    "\tk=\(k1+2*k2+2*k3+k4\)/6\n"
                    "\tx0=x0+h\n"
                    "\ty0=y0+k\n"
                    "\tif(x0>=xn):\n"
                       "\t\t break\n"
                "print\(\"The value of y:\"\)\n"
                "print\(y0\)\n",fun);
    fp=fclose(fp);
    system("cls");
    system(s);
    getch();

}
