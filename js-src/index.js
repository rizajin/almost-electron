const TheFramework = require("../build/Release/Node-plugin")
let ret = TheFramework.test(1,2)
console.log("If thy got 3, it is done. You got: ", ret)
TheFramework.window() // everlasting window, comms mechanism would be something else, maybe someday, or not.
console.log("end of program")