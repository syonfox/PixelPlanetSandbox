package;

import flixel.FlxG;
import flixel.FlxBasic;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

import flixel.addons.ui.FlxInputText;
import flixel.addons.ui.FlxUIText;
//import flixel.addons.ui.*;
class PlayState extends FlxState
{

	private var system:System;

	private var isPaused:Bool;

	private var btnReset:FlxButton;
	private var btnPause:FlxButton;
	//private var tglPause:FlxButton; //pause toggle

	private var txtGravity:FlxUIText;
	private var itxtGravity:FlxInputText;
	private var btnAddPlanet:FlxButton;
	private var txtPSize:FlxUIText;
	private var itxtPSize:FlxInputText;
	private var txtPMass:FlxUIText;
	private var itxtPMass:FlxInputText;
	private var txtPPos:FlxUIText;
	private var itxtPPosX:FlxInputText;
	private var itxtPPosY:FlxInputText;
	private var txtPVel:FlxUIText;
	private var itxtPVelX:FlxInputText;
	private var itxtPVelY:FlxInputText;
	private var txtPColor:FlxUIText;
	private var itxtPCR:FlxInputText;
	private var itxtPCG:FlxInputText;
	private var itxtPCB:FlxInputText;
	private var itxtPCA:FlxInputText;
	//private var menuPos:Vector;


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

		var mx=10; //menue start x
		var my=10; //menue start y;
		var mh=20; //menue item height
		var mg=5; //menu item gap
		var mfs=12; //menu font size;
		var mr=0; //menu row counter;
		{
			isPaused = false;
			btnReset = getFlxButton(mx, my+mr*(mh+mg),"assets/images/btn_gwr_100x20.png",
					100, 20, "Reset",LEFT, reset);
			btnPause = getFlxButton(mx+110, my+mr*(mh+mg), "assets/images/btn_gwr_100x20.png",
					100, 20, "Pause",LEFT, pause);
			mr++;
			txtGravity = new FlxUIText(mx, my+mr*(mh+mg), 150, "Gravity Constant", mfs, true);
			itxtGravity = new FlxInputText(mx+160, my+mr*(mh+mg), 50, "10", 12,
					FlxColor.BLACK, FlxColor.WHITE, true );
			mr++;
			btnAddPlanet = getFlxButton(mx, my+mr*(mh+mg), "assets/images/btn_gwr_100x20.png",
					100, 20, "Add Planet",LEFT,  addPlanet);
			mr++;
			txtPSize = new FlxUIText(mx, my+mr*(mh+mg), 100, "Size", mfs, true);
			itxtPSize = new FlxInputText(mx+110, my+mr*(mh+mg), 50, "10", 12,
					FlxColor.BLACK, FlxColor.WHITE, true );
			mr++;
			txtPMass = new FlxUIText(mx, my+mr*(mh+mg), 100, "Mass", mfs, true);
			itxtPMass = new FlxInputText(mx+110, my+mr*(mh+mg), 50, "10", 12,
					FlxColor.BLACK, FlxColor.WHITE, true );
			mr++;
			txtPPos = new FlxUIText(mx, my+mr*(mh+mg), 120, "Position(x,y)", mfs, true);
			itxtPPosX = new FlxInputText(mx+120, my+mr*(mh+mg), 50, "10", 12,
					FlxColor.BLACK, FlxColor.WHITE, true );
			itxtPPosY = new FlxInputText(mx+175, my+mr*(mh+mg), 50, "10", 12,
					FlxColor.BLACK, FlxColor.WHITE, true );
			mr++;
			txtPVel = new FlxUIText(mx, my+mr*(mh+mg), 120, "Velocity(x,y)", mfs, true);
			itxtPVelX = new FlxInputText(mx+120, my+mr*(mh+mg), 50, "10", 12,
					FlxColor.BLACK, FlxColor.WHITE, true );
			itxtPVelY = new FlxInputText(mx+175, my+mr*(mh+mg), 50, "10", 12,
					FlxColor.BLACK, FlxColor.WHITE, true );
			mr++;
			txtPColor = new FlxUIText(mx, my+mr*(mh+mg), 120, "Color(RGBA)", mfs, true);
			itxtPCR = new FlxInputText(mx+120, my+mr*(mh+mg), 40, "255", 12,
					FlxColor.BLACK, FlxColor.WHITE, true );
			itxtPCG = new FlxInputText(mx+165, my+mr*(mh+mg), 40, "255", 12,
					FlxColor.BLACK, FlxColor.WHITE, true );
			itxtPCB = new FlxInputText(mx+210, my+mr*(mh+mg), 40, "255", 12,
					FlxColor.BLACK, FlxColor.WHITE, true );
			itxtPCA = new FlxInputText(mx+255, my+mr*(mh+mg), 40, "255", 12,
					FlxColor.BLACK, FlxColor.WHITE, true );

			add(btnReset);
			add(btnPause);
			add(txtGravity);
			add(itxtGravity);
			add(btnAddPlanet);
			add(txtPSize);
			add(itxtPSize);
			add(txtPMass);
			add(itxtPMass);
			add(txtPPos);
			add(itxtPPosX);
			add(itxtPPosY);
			add(txtPVel);
			add(itxtPVelX);
			add(itxtPVelY);
			add(txtPColor);
			add(itxtPCR);
			add(itxtPCG);
			add(itxtPCB);
	  	add(itxtPCA);

		}
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		if (FlxG.keys.pressed.ENTER) {
			system.set_g(Std.parseFloat(itxtGravity.text));
		}
		if(!isPaused) {
			//trace( "system update" );
			system.update();
		}
		super.update(elapsed);
	}

	private function pause() : Void {
		trace("pause");
		if(isPaused) {
			trace( btnPause.text );
			btnPause.text = "Un-Pause";
			isPaused = false;
		} else {

			trace( btnPause.text );
			btnPause.text = "Pause";
			isPaused = true;
		}
	}

	private function addPlanet() : Void {
		var px = Std.parseFloat(itxtPPosX.text);
		var py = Std.parseFloat(itxtPPosY.text);
		var size = Std.parseFloat(itxtPSize.text);
		var mass = Std.parseFloat(itxtPMass.text);
		var vx = Std.parseFloat(itxtPVelX.text);
		var vy = Std.parseFloat(itxtPVelY.text);
		var r = Std.parseInt(itxtPCR.text);
		var g = Std.parseInt(itxtPCG.text);
		var b = Std.parseInt(itxtPCB.text);
		var a = Std.parseInt(itxtPCA.text);
		trace("added Planet"+px+py+size+mass+vx+vy+r+g+b+a);

		if( !Math.isNaN(px) && !Math.isNaN(py) && !Math.isNaN(size) && !Math.isNaN(mass)
		 		&& !Math.isNaN(vx) && !Math.isNaN(vy) && !Math.isNaN(r) && !Math.isNaN(g)
				 		&& !Math.isNaN(b) && !Math.isNaN(a)) {
			var p = new Planet(px,py,size, mass, vx, vy, FlxColor.fromRGB(r,g,b,a));
			system.addPlanet(p);
			add(p.getSprite());
			trace( "added sprite" );
		}
	}

	private function reset(  ) : Void {
		trace( "reset" );
	}

	private function getFlxButton( x:Int, y:Int, file:String, w:Int, h:Int,
															?label:String = "", ?s:Int = 12,
															?color:FlxColor = FlxColor.BLACK,
															?alignment:FlxTextAlign = LEFT,
															?onClick:Void->Void):FlxButton {

	var btn:FlxButton = new FlxButton(x, y, label, onClick);
	btn.loadGraphic(file, true, w, h);
	btn.label.setFormat("assets/fonts/Hack-Regular.ttf", s, color, alignment);

	return btn;
	}


}
