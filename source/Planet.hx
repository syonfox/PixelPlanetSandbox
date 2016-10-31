package;

import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.util.FlxColor;

import flixel.util.FlxSpriteUtil;
//using flixel.util.FlxSpriteUtil; // for drawing circless :D


class Planet {

  //hope these make sence they represent the
  //normal physics variables
  public var r:Float;
  public var m:Float;
  public var p:Vector;
  public var v:Vector;
  public var a:Vector;
  private var sprite:FlxSprite;
  private var color:FlxColor;
  /**
  *makes a new planate weth a green circle
  * @param ix input x pos of the center
  * @param iy input y pos of the center
  * @param ir input radius of the planet
  * @param im input mass of the planat
  * @param vx x speed
  * @param vx y speed
  */
  public function new(ix:Float, iy:Float, ir:Float, im:Float,
        vx:Float, vy:Float, ?ic:FlxColor = FlxColor.WHITE) {

    p = new Vector(ix, iy);
    r = ir;
    m = im;
    v = new Vector(vx, vy);
    a = new Vector();
    color = ic;
    generateSprite();



  }

  private function generateSprite() {
    sprite = new FlxSprite(p.x-r, p.y-r);
    sprite.makeGraphic(Std.int(2*r), Std.int(2*r), FlxColor.TRANSPARENT, true);
    FlxSpriteUtil.drawEllipse(sprite, 0, 0, 2*r, 2*r, color);
    trace( "made sprite" );
  }

  public function update():Void {
    var time:Float = 1/60; //60fps?

    //trace( "adding "+time+"*a to v, v orig is: ( "+v.x+" , "+v.y+" )");
    //        +", x:"+v.x+", y:"+v.y);
    //var tempbef:Float = v.rad;

    trace( "p is : ("+p.x+" , "+p.y+")" );
    trace( "v is : ("+v.x+" , "+v.y+")" );
    trace( "a is : ("+a.x+" , "+a.y+")" );

    v = v.add(a.scalerProduct(time));

    //trace( "v after is: ( "+v.x+" , "+v.y+" )");
    //        +", x:"+v.x+", y:"+v.y);
    //trace( "sprite coords bef are: x:"+x+", y:"+y );
    //var tempaft:Float = v.rad;

    p = p.add(v);

    sprite.x = p.x;
    sprite.y = p.y;

  }

  public function getSprite():FlxSprite {
    return sprite;
  }
}
