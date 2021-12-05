class Block{
    constructor({timeStamp,lastHash,data,hash}){
        this.data = data;
        this.hash = hash;
        this.lastHash = lastHash;
        this.timeStamp = timeStamp;
    }
};

module.exports = Block;