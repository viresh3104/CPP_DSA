# is number prime or not 

def is_prime(num):
    if num <= 1 :
        return "Not Prime"
    
    for i in range(2,num):
        if (num % i == 0):
            return "Not Prime"
    return "Prime"

print(is_prime(17))