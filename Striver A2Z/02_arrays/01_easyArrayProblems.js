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

*/