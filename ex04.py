# -*- coding: utf-8 -*-
print("==================================")

cars = 100              # 车的数量
space_in_a_car = 4    # 每个车的载客能力
drivers = 30            # 驾驶员数量
passengers = 90         # 乘客数量

cars_not_driven = cars - drivers                        # 空车
cars_driven = drivers                                   # 可载客的车
carpool_capacity = cars_driven * space_in_a_car         # 载客能力
average_passengers_per_car = passengers / cars_driven   # 每个车的平均乘客

print ("There are", cars, "cars available.")            # 输出车的数量
print ("There are only", drivers, "drivers available.")          # 输出驾驶员的数量
print ("There will be", cars_not_driven, "empty cars today.")    # 输出空车的数量
print ("We can transport", carpool_capacity, "people today.")    # 输出今天的载客能力
print ("We have", passengers, "to carpool today.")               # 输出今天要运的客人
print ("We need to put about", average_passengers_per_car, "in each car.") #输出每个车的平均载客
print ("Hey %s there." % "you")
print ("\n")