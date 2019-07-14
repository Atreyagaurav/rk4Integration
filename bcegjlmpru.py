import math
def fun(x,y):
	return 1+math.sin(y)
print("Enter x0:")
x0=float(input(":"))
print("Enter y0:")
y0=float(input(":"))
print("Enter xn:")
xn=float(input(":"))
print("Enter h:")
h=float(input(":"))
while True:
	k1=h*fun(x0,y0)
	k2=h*fun(x0+h/2,y0+k1/2)
	k3=h*fun(x0+h/2,y0+k2/2)
	k4=h*fun(x0+h,y0+k3)
	k=(k1+2*k2+2*k3+k4)/6
	x0=x0+h
	y0=y0+k
	if(x0>=xn):
		 break
print("The value of y:")
print(y0)
