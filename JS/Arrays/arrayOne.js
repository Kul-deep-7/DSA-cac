//1. FIND ELEMENTS IN ARRAY
const array = [1,2,3,4,5,6,7] //const is in global scope here so i can be access in for loops block & can be accessed in any other block

for (let i = 0; i < array.length; i++) {
    const element = array[i];  //this element will be accessible in for loop only cuz here it is block scoped
    //console.log(element) 
}
//console.log(element) // cant be accessed anywhere


//2. MIXED ELEMENTS IN ARRAY
const b = function() {
    4+4
}
function c (){
    4+8
}
const array2 = [1, "kuldeep", true, 3.14, null, NaN, {name : "cooldeep"}, function a() { 4+5 }, b, c()]

for (let i = 0; i < array2.length; i++) {
    const mixedElement = array2[i];
    //console.log(mixedElement)
}


//3. REVERSE AN ARRAY

const array3 = [1,2,3,4,5,6,7]

for (let i = array3.length - 1 ; i >= 0 ; i--) { //array3.length-1 cuz array length is 7 & there is no 7th index (it will be undefined) so we start from 6th index which is array3.length-1
    const reverse = array3[i];
    console.log(reverse)
}
//console.log(array3.reverse())