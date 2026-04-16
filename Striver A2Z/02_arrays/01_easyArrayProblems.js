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