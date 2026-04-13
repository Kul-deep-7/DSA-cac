//square stars

for (let i = 0; i <5; i++) { //outer loop
    let row = "" //creates empty row at start of each outer loop iteration
    for(let j = 0; j<5; j++){ //creates empty row at start of each outer loop iteration
        row= row+ "*"
    }
    console.log(row) // print completed row (*****)
}