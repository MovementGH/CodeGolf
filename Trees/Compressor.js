console.log(require('zlib').deflateRawSync(require('fs').readFileSync('SmolArr.js')).toString('base64'));