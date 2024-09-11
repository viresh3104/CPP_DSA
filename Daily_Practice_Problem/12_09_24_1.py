# write a code to find sum of number from 1 to n 

def sum_till_n(last_num):
    sum = 0
    for i in range(1,last_num+1):
        sum += i
    return sum

print(sum_till_n(100))