package;

import flixel.FlxG;
import flixel.FlxBasic;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class PlayState extends FlxState
{

	private var system:System;

	override public function create():Void {
		trace("PlayState");
		var w:Int = FlxG.width;
		var h:Int = FlxG.height;
		var size:Float = 10;
		var mass:Float = 100;
		var speed:Float = 0;
		//var direction:Float = Math.PI/4;
		//planet = new Planet(w/2, h/2, size, mass, speed, direction );

		system = new System();
		var p1 = new Planet(w/2, h/2, size, 1000, 0, -1, FlxColor.BLUE);
		system.addPlanet(p1);
		add(p1.getSprite());
		var p2 = new Planet(w/4, h/2, size, mass, 0, 10, FlxColor.RED);
		system.addPlanet(p2);
		add(p2.getSprite());

		super.create();
	}

	override public function update(elapsed:Float):Void
	{

		system.update();
		super.update(elapsed);
	}
}
