// # You are given an integer array height of length n. There are n vertical lines drawn such that 
// # the two endpoints of the ith line are (i, 0) and (i, height[i]).
// # Find two lines that together with the x-axis form a container, such that the container contains the most water.
// # Return the maximum amount of water a container can store.
// # Notice that you may not slant the container.
// # Input: height = [1,8,6,2,5,4,8,3,7]
// # Output: 49
// # Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. 
// # In this case, the max area of water (blue section) the container can contain is 49.


#include <iostream>
#include <vector>
using namespace std;



// bruteforce approch (Time complexity : O(n^2))::

// int most_filled_water(vector<int> height){
//     int max_area = 0;
//     for(int i = 0 ; i < height.size() ; i++){
//         for(int j = i+1 ; j < height.size(); j++){
//             int widht = j - i;
//             int min_bar_height = min(height[i] , height[j]);

//             int water_holding = widht * min_bar_height;
//             max_area = max(water_holding , max_area);

//         }
//     }
//     return max_area;
// }




// optimal approach::

int most_filled_water(vector<int> heights){
    int max_water = 0;
    int left_pointer = 0 ,right_pointer = heights.size() - 1;

    while(left_pointer < right_pointer){
        int width = right_pointer - left_pointer;
        int min_bar_height = min(heights[left_pointer] , heights[right_pointer]);
        
        int currWater = width * min_bar_height;

        max_water = max(currWater , max_water);

        heights[left_pointer] < heights[right_pointer] ? left_pointer++ : right_pointer-- ;
    }
    return max_water;
}






// calling the function

int main() {
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    int result = most_filled_water(arr);
    cout << result;


    cout << "\n";
    return 0;
}





