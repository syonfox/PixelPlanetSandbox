#ifndef INCLUDED_flixel_system_debug_interaction_tools_Eraser
#define INCLUDED_flixel_system_debug_interaction_tools_Eraser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_system,debug,interaction,Interaction)
HX_DECLARE_CLASS5(flixel,_system,debug,interaction,tools,Eraser)
HX_DECLARE_CLASS5(flixel,_system,debug,interaction,tools,Tool)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
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


class HXCPP_CLASS_ATTRIBUTES  Eraser_obj : public ::flixel::_system::debug::interaction::tools::Tool_obj{
	public:
		typedef ::flixel::_system::debug::interaction::tools::Tool_obj super;
		typedef Eraser_obj OBJ_;
		Eraser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.tools.Eraser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Eraser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Eraser_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Eraser","\xec","\x54","\xc3","\x7a"); }

		virtual ::flixel::_system::debug::interaction::tools::Tool init( ::flixel::_system::debug::interaction::Interaction Brain);

		virtual Void update( );

		virtual Void activate( );

		virtual Void doDeletion( bool remove);
		Dynamic doDeletion_dyn();

		virtual Void findAndDelete( ::flixel::group::FlxTypedGroup items,hx::Null< bool >  remove);
		Dynamic findAndDelete_dyn();

		virtual Void removeFromMemory( ::flixel::FlxBasic item,::flixel::group::FlxTypedGroup parentGroup);
		Dynamic removeFromMemory_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools

#endif /* INCLUDED_flixel_system_debug_interaction_tools_Eraser */ 
