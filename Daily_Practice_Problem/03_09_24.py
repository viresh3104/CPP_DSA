# You are given a string s consisting of lowercase English letters, and an integer k.

# First, convert s into an integer by replacing each letter with its position in the alphabet (i.e., replace 'a' with 1, 'b' with 2, ..., 'z' with 26).
# Then, transform the integer by replacing it with the sum of its digits. Repeat the transform operation k times in total.

# For example, if s = "zbax" and k = 2, then the resulting integer would be 8 by the following operations:

# Convert: "zbax" ➝ "(26)(2)(1)(24)" ➝ "262124" ➝ 262124
# Transform #1: 262124 ➝ 2 + 6 + 2 + 1 + 2 + 4 ➝ 17
# Transform #2: 17 ➝ 1 + 7 ➝ 8
# Return the resulting integer after performing the operations described above.

# ans:
# step 1 find the ascii value for each letter in the string

def sum_string(s:str , k:int) -> int :
    char_value = ''.join(str(ord(char) - ord('a') + 1) for char in s)  #finding the char number a = 1 , c = 3, etc 
    sum_string = sum(int(digit) for digit in char_value)               #finding the sum of that digits abc = 123 = 6
    for i in range (k-1):
        sum_string = sum(int(digit) for digit in str(sum_string))      #if sum is 45 and entered k = 2 then final ans is 9
    return sum_string


input_str = input("Enter the string: ")
number_of_transform = int(input("Enter the transformation you eant to perform: "))
print(sum_string(input_str , number_of_transform))