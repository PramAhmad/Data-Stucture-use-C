let arr = [5,2,3,4]
let lowest = arr[0]
for(let i =0; i <= 5; i++){
    if(arr[i] < lowest){
        lowest = arr[i]
    }
}
console.log(lowest)
    