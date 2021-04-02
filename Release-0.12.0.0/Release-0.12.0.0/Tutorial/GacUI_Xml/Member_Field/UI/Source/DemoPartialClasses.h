﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES

#include "GacUI.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace vl_workflow_global
{
	struct __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	struct __vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	struct __vwsno3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	class __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
}

namespace demo
{
	class MainWindowConstructor;
	class MainWindow;

	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsno3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::demo::MainWindow* self;
		::vl::presentation::controls::GuiSinglelineTextBox* textBoxA;
		::vl::presentation::controls::GuiSinglelineTextBox* textBoxB;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_0;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_1;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_2;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_3;
		::vl::presentation::controls::GuiButton* __vwsn_precompile_4;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_5;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_6;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_7;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_8;
		::vl::presentation::controls::GuiButton* __vwsn_precompile_9;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_10;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_11;
		void __vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_);
	public:
		MainWindowConstructor();
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class Demo
	{
	public:

		static Demo& Instance();
	};

/***********************************************************************
Closures
***********************************************************************/

	struct __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsno3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindow* __vwsn_this_;
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsno3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindow* __vwsnctor___vwsn_this_, ::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* __vwsno_1, ::vl::presentation::compositions::GuiEventArgs* __vwsno_2) const;
	};

	class __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription(::demo::MainWindowConstructor* __vwsnctorthis_0);

		::vl::presentation::controls::GuiSinglelineTextBox* __vwsn_bind_cache_0 = nullptr;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1);
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
