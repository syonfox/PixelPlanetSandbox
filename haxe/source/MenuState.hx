package;

import flixel.FlxG;
import flixel.FlxBasic;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import Std.*;

class MenuState extends FlxState {
	override public function create():Void {
		var btnPlay:FlxButton = getFlxButton(Std.int(FlxG.width/2)-32,100,
				"assets/images/btn_gor_32x64.png",64,32,"Play", CENTER, clickPlay);
		add(btnPlay);
		super.create();
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);
	}



	private function getFlxText( x:Int, y:Int, w:Int, ?s:Int = 18,
															?color:FlxColor = FlxColor.GREEN,
															?text:String = "",
															?alignment:FlxTextAlign = LEFT):FlxText {

	var txt:FlxText = new FlxText(x, y, w); // x, y, width
	txt.setFormat("assets/fonts/Hack-Regular.ttf", s, color, alignment);
	txt.text = text;
	trace( x+", "+y+", "+w+", "+text );
	return txt;
	}

	private function getFlxButton( x:Int, y:Int, file:String, w:Int, h:Int,
															?label:String = "", ?s:Int = 18,
															?color:FlxColor = FlxColor.BLACK,
														 	?alignment:FlxTextAlign = LEFT,
															?onClick:Void->Void):FlxButton {

	var btn:FlxButton = new FlxButton(x, y, label, onClick);
	btn.loadGraphic(file, true, w, h);
	btn.label.setFormat("assets/fonts/Hack-Regular.ttf", s, color, alignment);

	return btn;
	}

	private function clickPlay():Void {
     FlxG.switchState(new PlayState());
 }


}
