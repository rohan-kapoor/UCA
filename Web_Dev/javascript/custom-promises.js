// var promise1 = new Promise(promiseExecuter);
function customPromiseExecuter() {
    console.log("Inside custom promise executer")
}

function customPromise(executerFuncArg) {
    executerFuncArg();
    this.state = "pending";
    let returnValue = undefined;
}

var promiseCustom1 = customPromise(customPromiseExecuter);

//-----------------------------------------------------------------------------------------------------------------------------------------

function customPromiseExecuter(resolve, reject){
    setTimeout(() => {
        // reject("any value")
        resolve("Sample value")
        console.log("Inside promise executer function")
    }, 10000)
}

function customPromise(executerFuncArg) {
    this.state = "pending"
    let success

    executerFuncArg(
        (responseArg) => {
            this.state = "fulfilled"
            console.log("Inside resolve function with return value as : ", responseArg)
        },
        (errorArg) => {
            this.state = "rejected"
            console.log("Inside error function with return value as : ", errorArg)
        }
    );
    this.state = "pending";
    let returnValue = undefined;
}

var promiseCustom1 = new customPromise(customPromiseExecuter);