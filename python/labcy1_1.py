"""
#area and perimeter of circle
r=int(input("enter the radius (in cm): "))
area=3.14*r*r
perimeter=2*3.14*r
print("Area is ",area,"cm")
print("Perimeter is ",perimeter,"cm")"""


"""
#swapping
x=int(input("enter the number x : "))
y=int(input("enter the number y : "))
print("after swapping: ")
temp=x
x=y
y=temp
print("x = ",x)
print("y = ",y)
"""


"""#largest of 3
x,y,z=map(int,input("enter three numbers: ").split())
if x>y and x>z:
    print("largest number is: ",x)
if y>z:
    print("largest number is: ",y)
else:
    print("largest number is: ",z)"""


"""
#arithmetic operations
x,y=map(int,input("enter two numbers: ").split())
add=x+y
if x>y:
    sub=x-y
else:
    sub=y-x
mul=x*y
if x>y:
    div=x/y
else:
    div=y/x
print("addition = ",add,"\nsubtraction = ",sub,"\nmultiplication = ",mul,"\ndivision = ",div)
"""

"""
#first n multiples
n=int(input("enter the number n: "))
i=int(input("enter the number i: "))
for x in range (1,n+1):
    print(x,"*",i,"=",i*x)
"""

"""
#sum of first 100 even numbers
s=0
for x in range (2,201,2):
    s=s+x
print("sum of 100 even numbers is : ",s)
"""

"""
#factorial
f=1
n=int(input("enter the number: "))
for x in range (n,1,-1):
    f=f*x
print("factorial of",n,": ",f)
"""

"""
#number of digits
count=0
n=int(input("enter the number: "))
while n!=0:
    n=n//10
    count=count+1
print("number of digits: ",count)
"""

"""
#leap year
year=int(input("enter the year: "))
if (year%4==0 and year%100!=0) or (year%400==0):
    print(year,"is a leap year")
else:
    print(year,"is not a leap year")
"""

#roots of quadratic eqn
