// received: /dirt/play [
// 	'_id_',
// 	'1',

// 	'cps',
// 	0.5625,

// 	'cycle',
// 	504,

// 	'delta',
// 	0.8888888359069824,

// 	'orbit',
// 	0,

// 	's',
// 	'bd'
// ]


(


// b = NetAddr.new("192.168.1.235", 7771);    // create the NetAddr


b = NetAddr.new("127.0.0.1", 7771);

Routine
({
	16.do { |n|
		n.postln;
		b.sendBundle(0.2, ["/dirt/play", '_id_', 1, 'cps', 0.5625 ]);
		1.0.wait;
	}
}).play(AppClock);





// b.sendMsg("/hello", "there");
//
//b.sendMsg("/good/news", "you", "not you");
//

// b.sendMsg("/good/news", 1, 1.3, 77);



)

SuperDirt.start

//Quarks.checkForUpdates({Quarks.install("SuperDirt", "v1.7.3"); thisProcess.recompile()})