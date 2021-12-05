const Block = require("./block");

//describe(name,calback Function)
describe('Block',()=>{
    const timeStamp = '01/0/2016';
    const lastHash = 'foo-hash';
    const hash = 'hash';
    const data = 'foo-data';
    const block = new Block({timeStamp,lastHash,hash,data});
    it('has a timestamp,lastHash,Hash,data',()=>{
        expect(block.data).toEqual(data);
        expect(block.timeStamp).toEqual(timeStamp);
        expect(block.hash).toEqual(hash);
        expect(block.lastHash).toEqual(lastHash);
    });
});