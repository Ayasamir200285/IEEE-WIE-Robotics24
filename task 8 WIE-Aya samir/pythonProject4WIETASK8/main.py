#  (1)
# n=int(input("enter number:"))
# i=1
# sum=0
# for i in range(1, n+1):
#       sum=sum+i
#       i += 1
# print(sum)

# (2)
# r=int(input("enter your  radius :"))
# pi=3.14
# area=pi*(r**2)
# print("your area is :",area)


# (3)
# Celsius=int(input("enter your temp by  Celsius : "))
# Fahrenheit=(Celsius*1.8)+32
# print("your temp by Fahrenheit is : ",Fahrenheit)



# (4)
# list=input("enter your list : ")
# list=list.split()
# print("your list is : ", list)
# first = []
# second = []
# for h in list :
#     length = len(h)
#     half = length // 2
#     first_half=h[:half]
#     second_half=h[half:]
#     first.append(first_half)
#     second.append(second_half)
# print(first)
# print(second)


# (5)
# number=int(input("enter number : "))
# i=1
# result=1
# while i>0:
#     print(i)
#     i += 1
#     result *= i
#     if i==number :
#         break
# print("the factorial is : ", result)

# (6)
# main_list = []
# list_length = int(input("input your list length :"))
# for x in range(0, list_length):
#     user_input = int(input("enter the list numbers : "))
#     main_list.append(user_input)
# print(main_list)
#
# for h in range(0, len(main_list)):
#     for j in range(h + 1, len(main_list)):
#         if main_list[h] >= main_list[j]:
#             main_list[h], main_list[j] = main_list[j], main_list[h]
#
#
# print("your list after arrange is : ", main_list)
# print("the  maximum element is : ",main_list[0])
# print("the minimum element is : ",main_list[len(main_list)-1])

# (7)
# main_list = []
# list_length = int(input("input your list length :"))
# for x in range(0, list_length):
#     user_input = int(input("enter the list numbers : "))
#     main_list.append(user_input)
# print(main_list)
#
# for h in range(0, len(main_list)):
#     for j in range(h + 1, len(main_list)):
#         if main_list[h] >= main_list[j]:
#             main_list[h], main_list[j] = main_list[j], main_list[h]
#
#
# print("your list after arrange is : ", main_list)
#
# second_list = []
# list_length = int(input("input your list length :"))
# for y in range(0, list_length):
#     user_input = int(input("enter the list numbers : "))
#     second_list.append(user_input)
# print(second_list)
#
# for l in range(0, len(second_list)):
#     for s in range(l + 1, len(second_list)):
#         if second_list[l] >= second_list[s]:
#             second_list[l], second_list[s] = second_list[s], second_list[l]
#
#
# print("your list after arrange is : ", second_list)
# if main_list==second_list:
#     print("the two tuples are equal ")
# else:
#     print("the two tuples are not equal ")

