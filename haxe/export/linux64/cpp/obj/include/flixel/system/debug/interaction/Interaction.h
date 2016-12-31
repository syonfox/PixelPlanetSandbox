#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#define INCLUDED_flixel_system_debug_interaction_Interaction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_system,debug,interaction,Interaction)
HX_DECLARE_CLASS5(flixel,_system,debug,interaction,tools,Tool)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace flixel{
namespace _system{
namespace debug{
namespace interaction{


class HXCPP_CLASS_ATTRIBUTES  Interaction_obj : public ::flixel::_system::debug::Window_obj{
	public:
		typedef ::flixel::_system::debug::Window_obj super;
		typedef Interaction_obj OBJ_;
		Interaction_obj();
		Void __construct(::openfl::_legacy::display::Sprite container);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.Interaction")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Interaction_obj > __new(::openfl::_legacy::display::Sprite container);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Interaction_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Interaction","\xb2","\xcf","\x8b","\x20"); }

		::flixel::_system::debug::interaction::tools::Tool activeTool;
		::flixel::group::FlxTypedGroup selectedItems;
		::flixel::math::FlxPoint flixelPointer;
		bool pointerJustPressed;
		bool pointerJustReleased;
		bool pointerPressed;
		::openfl::_legacy::display::Sprite _container;
		::openfl::_legacy::display::Sprite _customCursor;
		Array< ::Dynamic > _tools;
		int _turn;
		::haxe::ds::IntMap _keysDown;
		::haxe::ds::IntMap _keysUp;
		bool _wasMouseVisible;
		bool _wasUsingSystemCursor;
		bool _debuggerInteraction;
		::flixel::input::FlxPointer _flixelPointer;
		virtual Void handleDebuggerVisibilityChanged( );
		Dynamic handleDebuggerVisibilityChanged_dyn();

		virtual Void updateMouse( ::openfl::_legacy::events::MouseEvent event);
		Dynamic updateMouse_dyn();

		virtual Void handleMouseClick( ::openfl::_legacy::events::MouseEvent event);
		Dynamic handleMouseClick_dyn();

		virtual Void handleMouseInDebugger( ::openfl::_legacy::events::MouseEvent event);
		Dynamic handleMouseInDebugger_dyn();

		virtual Void handleKeyEvent( ::openfl::_legacy::events::KeyboardEvent event);
		Dynamic handleKeyEvent_dyn();

		virtual Void addTool( ::flixel::_system::debug::interaction::tools::Tool tool);
		Dynamic addTool_dyn();

		virtual Void destroy( );

		virtual bool isActive( );
		Dynamic isActive_dyn();

		virtual Void update( );

		virtual Void postDraw( );
		Dynamic postDraw_dyn();

		virtual ::openfl::_legacy::display::Graphics getDebugGraphics( );
		Dynamic getDebugGraphics_dyn();

		virtual Void drawItemsSelection( );
		Dynamic drawItemsSelection_dyn();

		virtual ::flixel::_system::debug::interaction::tools::Tool getTool( ::hx::Class className);
		Dynamic getTool_dyn();

		virtual Void toggleVisible( );

		virtual Void registerCustomCursor( ::String name,::openfl::_legacy::display::BitmapData icon);
		Dynamic registerCustomCursor_dyn();

		virtual Void updateCustomCursors( );
		Dynamic updateCustomCursors_dyn();

		virtual Void saveSystemCursorInfo( );
		Dynamic saveSystemCursorInfo_dyn();

		virtual Void restoreSystemCursor( );
		Dynamic restoreSystemCursor_dyn();

		virtual Void setActiveTool( ::flixel::_system::debug::interaction::tools::Tool value);
		Dynamic setActiveTool_dyn();

		virtual Void setSystemCursorVisibility( bool status);
		Dynamic setSystemCursorVisibility_dyn();

		virtual Void setToolsCursorVisibility( bool status);
		Dynamic setToolsCursorVisibility_dyn();

		virtual Void clearSelection( );
		Dynamic clearSelection_dyn();

		virtual bool keyPressed( int key);
		Dynamic keyPressed_dyn();

		virtual bool keyJustPressed( int key);
		Dynamic keyJustPressed_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction

#endif /* INCLUDED_flixel_system_debug_interaction_Interaction */ 
