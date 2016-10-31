package;


class Vector {

  public var x:Float;

  public var y:Float;

  private var twoPi:Float;

  public function new(?ix:Float=0, ?iy:Float=0) {
    x = ix;
    y = iy;
  }



  //private inline function get_rad():Float {

  //}
  private inline function length():Float {
    return Math.sqrt(x*x + y*x);
  }
  

  //adds another vector to the curent one.
  public function add( v:Vector ) : Vector {
    return new Vector(x + v.x, y + v.y);

  }

  public function sub( v:Vector) : Vector {
    return new Vector(x - v.x, y - v.y);
  }

  public function scalerProduct(s:Float ) : Vector {
    return new Vector(x*s, y*s);
  }

  static public function polarToVector( l:Float, r:Float ) : Vector {
    return new Vector(l*Math.cos(r), l*Math.sin(r));
  }
}
