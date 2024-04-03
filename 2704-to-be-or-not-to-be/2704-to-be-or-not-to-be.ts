type ToBeOrNotToBe = {
    toBe: (val: any) => boolean;
    notToBe: (val: any) => boolean;
};

const expect = (val: any): ToBeOrNotToBe => ({
    toBe: (otherVal) => {
        if(val===otherVal) return true;
        throw "Not Equal";
    },
    notToBe: (otherVal) => {
        if(val!==otherVal) return true;
        throw "Equal";
    }
});

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */