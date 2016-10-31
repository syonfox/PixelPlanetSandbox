package ;

class System {

  private var planets:Array<Planet>;
  private var g(null, set):Float;
  public static inline var EPSILON:Float = 0.0000001;
  public function new(grav:Float = 10) : Void {
    g = grav;
    planets = [];
  }

  public function addPlanet( p:Planet ) : Void {
    planets.push(p);
  }

  public function update():Void {
    var a:Array<Vector> = [];
    var destQ:Array<Int> = [];
    for(i in 0...planets.length) {
      a.push(new Vector());
    }

    //double for for each pair of planets
    for(i in 0...planets.length-1) {
      for(j in i+1...planets.length) {
        //trace( "planets["+i+"].v is : ("+planets[i].v.x+" , "+planets[i].v.y+")" );
        //trace( "planets["+j+"].v is : ("+planets[j].v.x+" , "+planets[j].v.y+")" );
        //det force to the distence between the planets
        var force:Vector = planets[j].p.sub( planets[i].p );
          //trace( "force is : ("+force.x+" , "+force.y+")" );
          //dont want to devide by 0 thanks dad :P
        if(force.x != 0 && force.y != 0) {
          force = force.scalerProduct((g*planets[i].m*planets[j].m)/
                ((force.x * force.x)+(force.y * force.y)));//length before squareroot
          //trace( "force is: ( "+force.x+" , "+force.y+" )");
          //finde the acceleration of planet i due to j
          var acc = force.scalerProduct(1/planets[i].m);
          //trace( "acc is: ( "+acc.x+" , "+acc.y+" )");
          a[i] = a[i].add(acc);//add that acceleration to the runing total for i
          //same for planet j
          acc = force.scalerProduct(-1/planets[j].m);
          //trace( "acc j is: ( "+acc.x+" , "+acc.y+" )");
          a[j] = a[j].add(acc);
        } else {
          destQ.push(i);
          destQ.push(j);
        }

      }
    }

    if(destQ.length != 0) {
      destQ = removeDups(destQ);
    }

    for(i in 0...planets.length) {
      //trace( "a["+i+"] is : ("+a[i].x+" , "+a[i].y+")" );
      planets[i].a = a[i];
      planets[i].update();
    }
  }

  private function removeDups( a:Array<Int> ) : Array<Int> {
    for( i in a ) {
      expr
    }

  }

  public function set_g( ig:Float ) : Float {
   return this.g = ig;
 }



}
