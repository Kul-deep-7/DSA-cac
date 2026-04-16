/* 
find largest element in array


function largestElement(array){
    let maxValue = 0 //assume 0 is the value of maxValue for now
    for(let i=0; i<array.length; i++){ //loop through the array and check the condition
        if(array[i]> maxValue){ //if array[i] is bigger than maxValue change the maxValue to array[i]
            maxValue = array[i] //array[i] is 1 > maxValue is 0, so now maxValue is 1 , then it will check the next is 3 > 1? true maxValue is 3 now, 9>3? true, 2>9? false maxValue stays 9
        }
    }
    return maxValue
}

console.log(largestElement([1,3,9,2,7,8,3]))

*/