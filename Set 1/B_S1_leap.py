
def is_leap(year):
    leap="no"
    if (year % 4 == 0) and (year % 100 != 0) :
        leap = "yes"
    elif (year % 100 ==0)and (year % 400 == 0):
        leap = "yes"
    return leap 
 

year=int(input())
print(is_leap(year)) 
