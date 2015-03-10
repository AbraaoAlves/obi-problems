
//describe problem
//https://www.urionlinejudge.com.br/judge/en/problems/view/1191
//

var execute = require("tree");

describe("solution Tree Recovery", function(){
	it("Input to output", function  () {
		var pos = execute("ABDECFGHI DBEAFCHGI");		
		
		expect(pos).toBe("DEBFHIGCA");
	});
});