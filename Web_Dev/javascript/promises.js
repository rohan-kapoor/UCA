//promise
//Promise is an object created using Promise() constructor function and have 2 properties
//  .state
// .value

// state - Possible value
//  - pending
//  - fulfilled
//  -  rejected

// value - Possible value
//  - undefined
//  - return value or error

// console.log(promise1 === promise2);

// var promise2 = new Promise(promiseExecuter);

function promiseExecuter(resolve, reject){
    setTimeout(() => {
        //resolve({response : "response value"})
        reject({response : "response value"})
        console.log("Inside promise executer function")
    }, 10000)
}

let responseValue;
var promise1 = new Promise(promiseExecuter);
//promise1.then((someValue) => {
promise1.catch((someValue) => {
    responseValue = someValue
})