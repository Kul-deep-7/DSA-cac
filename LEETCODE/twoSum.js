/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 
*/

const num=[1,2,3,5,7,4,8,9]

const target = 13

function twoSum(num, target){
    for(let i=0; i < num.length; i++){ //outer loop will start from index i and will go till the end of an array
        for (let j = i+1; j < num.length; j++) { // inner loop will start from index i+1 and will got till the end of an array
            if(target === num[i]+num[j]){
                console.log(`${num[i]}+${num[j]} is equal to ${target}`)
                    return num[i]+num[j]  
            }
        }
    }
}
console.log(twoSum(num, target))

//eg: i is 1(index 0) then j will start from 2(index i+1) and will go till the end of an array,
//    then i will be 2(index 1) then j will start from 3(index i+1) and will go till the end of an array.
//    this way we will get all the possible combinations of two numbers in an array and we will check if their sum is equal to target or not. If it is equal then we will return the sum of those two numbers.