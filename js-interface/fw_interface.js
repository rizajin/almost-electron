const Framework = require('../build/Release/Node-plugin');

function test(a, b) {
    return Framework.test(a, b);
}

function window() {
    Framework.window();
}

module.exports = {
    test,
    window
};