(function() {
  var cube, cubes, list, math, num, number, opposite, race, square;
  var __slice = Array.prototype.slice;
  number = 42;
  opposite = true;
  if (opposite) {
    number = -42;
  }
  square = function(x) {
    return x * x;
  };
  list = [1, 2, 3, 4, 5];
  math = {
    root: Math.sqrt,
    square: square,
    cube: function(x) {
      return x * square(x);
    }
  };
  race = function() {
    var runners, winner;
    winner = arguments[0], runners = 2 <= arguments.length ? __slice.call(arguments, 1) : [];
    print(winner, runners);
    return console.log(winner, runners);
  };
  if (typeof elvis !== "undefined" && elvis !== null) {
    console.log("I know it!");
  }
  cubes = (function() {
    var _i, _len, _results;
    _results = [];
    for (_i = 0, _len = list.length; _i < _len; _i++) {
      num = list[_i];
      _results.push(math.cube(num));
    }
    return _results;
  })();
  square = function(x) {
    return x * x;
  };
  cube = function(x) {
    return square(x) * x;
  };
}).call(this);
