/* 
        //find largest element in array


function largestElement(array){
    let maxValue = array[0] //assume 0 index is the value of maxValue for now (which is 1)
    for(let i=1; i<array.length; i++){ //loop through the array from 1 index cuz 0 index is in maxValue and check the condition
        if(array[i]> maxValue){ //if array[i] is bigger than maxValue change the maxValue to array[i]
            maxValue = array[i] //array[i] is 3 > maxValue is 1, true maxValue is 3 now, -9>3? false, 2>3? false maxValue stays 3 for now and move further
        }
    }
    return maxValue
}

console.log(largestElement([1,3,-9,2,7,8,3]))
 */

/*
        //Find second Largest number in an array

function secondLargest(arr){
    if(arr.length < 2) 
    return "length of an array is less than 2"
    
    let largest = arr[0];
    let secondLargest = null //second largest should be null cuz what if array has all same numbers. if keep it as arr[0] it will return 0th element.
    
    for(let i=1; i<arr.length; i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i]
        }else if(arr[i] !== largest &&  //if current number is not largest AND
        (secondLargest===null || arr[i] > secondLargest)){ //we dont yet have secondLargest OR current is better than secondLargest
            secondLargest = arr[i] //update secondLargest
        }
    }
    return secondLargest
    
    
}

console.log(secondLargest([2,3,5,7,4,4,9,8]))
console.log(secondLargest([5,5,5]))        
console.log(secondLargest([5]))            
console.log(secondLargest([-5, -3, -1]))   
console.log(secondLargest([10, -3, -1]))   
console.log(secondLargest([1, 2]))


// Example array = [3,4,7,5]

        // iteration 2 → arr[i] = 4
        // 4 > 3 → true
        // if block runs
        // secondLargest = 3
        // largest = 4

        // iteration 3 → arr[i] = 7
        // 7 > 4 → true
        // if block runs
        // secondLargest = 4
        // largest = 7

        // iteration 4 → arr[i] = 5
        // 5 > 7 → false → if block skipped

        // else if condition:
        // arr[i] !== largest → 5 !== 7 → true
        // secondLargest === null → 4 === null → false
        // arr[i] > secondLargest → 5 > 4 → true

        // (false OR true) → true
        // true AND true → true

        // so else if runs
        // secondLargest = 5
*/

/*
        //check array is sorted or not

        function array(arr){
            let num = arr[0]
            for(let i = 1; i<=arr.length; i++){
                if(num > arr[i]){
                    return "array is not sorted"
                    
            }else{
                   num = arr[i]
                }
            }return "array is sorted"    
        }

        console.log(array([2,3,4,5]))
        console.log(array([2,3,4,5,1]))
        console.log(array ([-2, -3, 0]))
        console.log(array([2,2,2,2]))

*/

/*
        //Remove duplicates from sorted array


function array(arr) {
   
    let num = arr[0]
    let nonduplicates = 0
    for(let i=1; i<arr.length; i++){
        if(num === arr[i]){
            num = arr[i]
        }else{
            nonduplicates = nonduplicates + 1
            num=arr[i]
        }
    }
    return nonduplicates
}

console.log (array([1,2,3,4,5,6]))
console.log(array([2,2,2,2]))
console.log(array([2,3,3,4,4,5,5]))

                    !!!!!!!    did the above code myself but wrong expected output (should have read the question properly     !!!!!!!

*/