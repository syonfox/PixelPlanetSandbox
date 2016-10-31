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

    for(i in 0...planets.length) {
      a.push(new Vector());
    }

    for(i in 0...planets.length-1) {

      for(j in i+1...planets.length) {
        //trace( "planets["+i+"].v is : ("+planets[i].v.x+" , "+planets[i].v.y+")" );
        //trace( "planets["+j+"].v is : ("+planets[j].v.x+" , "+planets[j].v.y+")" );

        var force:Vector = planets[j].p.sub( planets[i].p );
        //trace( "force is : ("+force.x+" , "+force.y+")" );
        force = force.scalerProduct((g*planets[i].m*planets[j].m)/
              ((force.x * force.x)+(force.y * force.y)));//length before squareroot
        //trace( "force is: ( "+force.x+" , "+force.y+" )");
        var acc = force.scalerProduct(1/planets[i].m);
        //trace( "acc is: ( "+acc.x+" , "+acc.y+" )");
        a[i] = a[i].add(acc);
        acc = force.scalerProduct(-1/planets[j].m);
        //trace( "acc j is: ( "+acc.x+" , "+acc.y+" )");
        a[j] = a[j].add(acc);

      }
    }

    for(i in 0...planets.length) {
      //trace( "a["+i+"] is : ("+a[i].x+" , "+a[i].y+")" );
      planets[i].a = a[i];
      planets[i].update();
    }
  }

  public function set_g( ig:Float ) : Float {
   return this.g = ig;
 }



}
