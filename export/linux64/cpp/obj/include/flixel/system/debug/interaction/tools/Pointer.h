#ifndef INCLUDED_flixel_system_debug_interaction_tools_Pointer
#define INCLUDED_flixel_system_debug_interaction_tools_Pointer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_system,debug,interaction,Interaction)
HX_DECLARE_CLASS5(flixel,_system,debug,interaction,tools,Pointer)
HX_DECLARE_CLASS5(flixel,_system,debug,interaction,tools,Tool)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace flixel{
namespace _system{
namespace debug{
namespace interaction{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  Pointer_obj : public ::flixel::_system::debug::interaction::tools::Tool_obj{
	public:
		typedef ::flixel::_system::debug::interaction::tools::Tool_obj super;
		typedef Pointer_obj OBJ_;
		Pointer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.tools.Pointer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Pointer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Pointer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Pointer","\x9d","\xe8","\x72","\x1e"); }

		virtual ::flixel::_system::debug::interaction::tools::Tool init( ::flixel::_system::debug::interaction::Interaction brain);

		virtual Void update( );

		virtual Void handleItemClick( ::flixel::FlxObject item);
		Dynamic handleItemClick_dyn();

		virtual ::flixel::FlxObject pinpointItemInGroup( Array< ::Dynamic > members,::flixel::math::FlxPoint cursor);
		Dynamic pinpointItemInGroup_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools

#endif /* INCLUDED_flixel_system_debug_interaction_tools_Pointer */ 
